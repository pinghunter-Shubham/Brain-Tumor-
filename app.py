
from flask import Flask,render_template,request
from ML_models import tumor_detection
from ML_models import image_conv
import os

print("There was no error in importing the elements")

app=Flask(__name__)
APP_ROUTE=os.path.dirname(os.path.abspath(__file__))

@app.route("/")
def mainpage():
    #main url function that will return the main home page
    return 'Hello World'

#These two url are for the mri image scanner and result
@app.route('/detector')
def detector():
    return render_template('detector.html')

@app.route("/detector_output", methods=['POST','GET'])
def detection_output():
    image=request.files.get('file')
    filename=image.filename
    destination=os.path.join(APP_ROUTE,"static")
    
    image.save("/".join([destination,"temp.tif"]))
    print("The file path ot save the incoming image to: ",destination)

    # convert_jpg_to_tif('static/temp.jpg','static/temp.tif')
    tumor_detection.tumor_detect('static/temp.tif')
    image_conv.convert_tif_to_jpg('static/temp.tif', 'static/temp.jpg')
    image_conv.convert_tif_to_jpg('static/result.tif', 'static/result.jpg')
    
    return render_template("detection_output.html", tasks=filename)


#These two url are for the risk predector page and the correponding output
@app.route('/risk_predictor')
def risk_predictor():
    return 'This is the risk prediction page.'

if __name__=='__main__':
    app.run(debug=True)