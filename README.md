# Brain Tumor Detection and Classification

## Overview

This project presents a basic prototype software designed to detect brain tumors with significant accuracy and classify the tumor type as either 'Glioma Tumor', 'Meningioma Tumor', or 'Pituitary Tumor'. 

### Tumor Detection and Segmentation

The model for detection and segmentation of brain tumors is based on the Unet architecture. It features:
- **Encoder**: 4 layers of convolutional neural networks (CNN) and 4 layers of MaxPooling.
- **Decoder**: 4 layers of CNN and 4 layers of MaxPooling.
- **Bridge**: Connecting the encoder and decoder, it consists of 2 layers of CNN.

The model is trained using brain MRI images in '.tif' format along with their corresponding masks, also in '.tif' format. These datasets are sourced from Kaggle, with the link provided later. For monitoring the training process, metrics such as 'dice_coefficient', 'iou', and 'iou_loss' are utilized.

### Tumor Classification

For classifying brain tumors, the model uses '.jpeg' images from Kaggle datasets. The classification model is based on the 'ImageNet' model from Google, chosen for its efficiency in training.

### Additional Feature: Risk Analysis

The application also offers a feature for analyzing the risk factor of a patient having a tumor. A doctor can input a tissue/membrane report of the affected area, which includes parameters such as:
- RNASeqCluster
- MethylationCluster
- miRNACluster
- CNCluster
- RPPACluster
- OncosignCluster
- COCCluster
- Histological Type
- Neoplasm Histologic Grade
- Tumor Tissue Site
- Laterality
- Tumor Location
- Gender
- Age at Initial Pathologic Diagnosis
- Race
- Ethnicity

Using these features, the application can predict the patient's risk of future mortality. This data is input as a .csv file.

## Future Updates

Future updates will focus on fine-tuning the model and improving predictions.

---

Feel free to make any adjustments or let me know if you need further modifications!
