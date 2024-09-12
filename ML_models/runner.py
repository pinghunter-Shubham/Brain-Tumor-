import os
import sys
def classify():
    os.system("PYTHONPATH=ML_models/site-packages/ python3.11 ML_models/tumor_classifier.py ML_models/temp.png")
