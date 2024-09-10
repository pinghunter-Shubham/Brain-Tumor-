import os
import sys
def classify(fp):
    os.system("PYTHONPATH=site-packages/ python3.11 tumor_classifier.py "+sys.argv[1])  