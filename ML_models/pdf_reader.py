import re
import PyPDF2
def read_pdf(filepath):
     
    # with open(filepath) as pdf_file:
    pdf_reader = PyPDF2.PdfReader(filepath)

    pdf_text = ""
    for page_num in range(len(pdf_reader.pages)):
        page = pdf_reader.pages[page_num]
        pdf_text += page.extract_text()
    pattern = r'(RNASeqCluster|MethylationCluster|miRNACluster|CNCluster|RPPACluster|OncosignCluster|COCCluster|Histological Type|Neoplasm Histologic Grade|Tumor Tissue Site|Laterality|Tumor Location|Gender|Age at Initial Pathologic Diagnosis|Race|Ethnicity)\s*-\s*(\d+)'

    matches = re.findall(pattern, pdf_text)
    result={}
    for param, value in matches:
        result[param]=value
    return result