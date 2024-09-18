from ML_models.pdf_reader import read_pdf
from flask import Flask,render_template,request
from ML_models import tumor_detection
from ML_models import image_conv
from ML_models import runner
import os
from ML_models.risk_predictor import predict_risk

app=Flask(__name__)
APP_ROUTE=os.path.dirname(os.path.abspath(__file__))

@app.route("/")
def mainpage():
    #main url function that will return the main home page
    return render_template("home.html")

#These two url are for the mri image scanner and result
@app.route('/detector')
def detector():
    return render_template('detection.html')

@app.route("/detector_output", methods=['POST','GET'])
def detection_output():
    image=request.files.get('file')
    filename=image.filename
    destination=os.path.join(APP_ROUTE,"static")
    
    image.save("/".join([destination,"temp.tif"]))
    # print("The file path ot save the incoming image to: ",destination)

    # convert_jpg_to_tif('static/temp.jpg','static/temp.tif')
    tumor_detection.tumor_detect('static/temp.tif')
    image_conv.convert_tif_to_jpg('static/temp.tif', 'static/temp.jpg')
    image_conv.convert_tif_to_jpg('static/result.tif', 'static/result.jpg')
    
    return render_template("detection_output.html", tasks=filename)


#These two url are for handling the tumor image classification 
@app.route('/classifier')
def classifier():
    return render_template('Classification.html')

@app.route('/classifier_output',methods=['POST'])
def classifier_output():
    image=request.files.get('file')
    filename=image.filename
    destination=os.path.join(APP_ROUTE,"ML_models")
    
    image.save("/".join([destination,"temp.png"]))
    # print("The file path ot save the incoming image to: ",destination)
    runner.classify()
    with open("ML_models/classification_result.txt","r") as file:
        result=file.read()
        # print(result.split())
        # print("Classification model generated result==> \n",result)
        return render_template("Classification_output.html", classification_result=result.split()); 

#These two url are for the risk predector page and the correponding output
@app.route('/risk_predictor')
def risk_predictor():
    return render_template('risk.html')

@app.route('/risk_predictor_output', methods=['POST'])
def risk_predictor_output():
    pdf=request.files.get('file')
    filename=pdf.filename
    destination=os.path.join(APP_ROUTE,"static")
    pdf.save("/".join([destination,"input_pdf.pdf"]))
    
    pdf_data=read_pdf("ML_models/Report.pdf")
    print("PDF data read from the file")
    print(pdf_data)

    result=predict_risk(RNASeqCluster=pdf_data['RNASeqCluster'], MethylationCluster=pdf_data['MethylationCluster'],miRNACluster=pdf_data['miRNACluster'],OncosignCluster=pdf_data['OncosignCluster'],COCCluster=pdf_data['COCCluster'],neoplasm_histologic_grade=pdf_data['Neoplasm Histologic Grade'],tumor_tissue_site=pdf_data['Tumor Tissue Site'], laterality=pdf_data['Laterality'], tumor_location=pdf_data['Tumor Location'], gender=pdf_data['Gender'], age_at_initial_pathologic=pdf_data['Age at Initial Pathologic Diagnosis'],race=pdf_data['Race'],ethnicity=pdf_data['Ethnicity'],CNCluster=pdf_data['CNCluster'],RPPACluster=pdf_data['RPPACluster'],histological_type=pdf_data['Histological Type'])

    print("The result of the prediction: ", result)

    return render_template('risk.html')


#This url is for the about us page
@app.route('/about_us')
def about_us():
    return render_template('AboutUs.html')

if __name__=='__main__':
    app.run(debug=True)