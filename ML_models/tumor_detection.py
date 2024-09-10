import os
from tensorflow.keras.models import model_from_json
from tensorflow.keras.preprocessing.image import load_img, img_to_array
import tensorflow as tf
import keras.backend as K
import numpy as np
import matplotlib.pyplot as plt
from PIL import Image

def tumor_detect(image_path):
    # Define the custom dice coefficient function
    def dice_coef(y_true, y_pred, smooth=1):
        y_true_f = K.flatten(y_true)
        y_pred_f = K.flatten(y_pred)
        intersection = K.sum(y_true_f * y_pred_f)
        return (2. * intersection + smooth) / (K.sum(y_true_f) + K.sum(y_pred_f) + smooth)

    # Load the model architecture from JSON
    with open('ML_models/segmentation_best_model_part_3.json', 'r') as json_file:
        model_json = json_file.read()
    model = model_from_json(model_json, custom_objects={'dice_coef': dice_coef})

    # Load the model weights
    model.load_weights('ML_models/segmentation_best_model_part_3.weights.h5')

    def preprocess_image(image_path):
    # Load the image with the target size
        img = load_img(image_path, target_size=(256, 256))
    # Convert the image to array
        img_array = img_to_array(img)
    # Normalize the image
        img_array = img_array / 255.0
    # Expand dimensions to match the model input shape
        img_array = np.expand_dims(img_array, axis=0)
        return img_array

    def postprocess_prediction(prediction):
        # Remove the batch dimension
        prediction = np.squeeze(prediction, axis=0)
        # Apply a threshold to convert to binary image
        prediction = (prediction > 0.5).astype(np.uint8)
        return prediction

    def predict_segmentation(image_path):
        # Preprocess the input image
        preprocessed_image = preprocess_image(image_path)
        # Make prediction
        prediction = model.predict(preprocessed_image)
        # Postprocess the prediction
        processed_prediction = postprocess_prediction(prediction)
        return processed_prediction

    def display_image(image, title='Image'):
        plt.imshow(image, cmap='gray')
        plt.title(title)
        plt.axis('off')
        plt.show()

    def save_image(image, filepath, title='Image'):
        plt.imshow(image, cmap='gray')
        plt.title(title)
        plt.axis('off')
        plt.savefig(filepath)
        plt.close()

# Function to handle file upload and prediction
    def predict_and_display(image_path):
        # Make a prediction
        prediction = predict_segmentation(image_path)
        # Display the input image
        input_image = load_img(image_path)
        display_image(input_image, title='Input Image')
        # Display the predicted segmentation
        display_image(prediction, title='Predicted Segmentation')

# Example usage
# tif_path = 'path/to/your/input_image.tif'
# jpg_path = 'path/to/your/output_image.jpg'
# convert_tif_to_jpg(tif_path, jpg_path)
    
    def predict_and_save(image_path, save_path):
        # Make a prediction
        prediction = predict_segmentation(image_path)
        # Save the predicted segmentation
        save_image(prediction, save_path, title='Predicted Segmentation')
    # image_path=tumor_detect()
    save_path='static/result.tif'
    # predict_and_display(image_path)
    predict_and_save(image_path,save_path)