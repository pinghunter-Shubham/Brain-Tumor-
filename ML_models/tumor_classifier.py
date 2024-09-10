#!pip install tensorflow==2.15.0 # Install a compatible tensorflow version
# import pkg_resources
# pkg_resources.require("tensorflow==2.15.0")
import sys
from keras.models import load_model  # TensorFlow is required for Keras to work
from PIL import Image, ImageOps  # Install pillow instead of PIL
import numpy as np
import tensorflow as tf #Import tensorflow

# Disable scientific notation for clarity
np.set_printoptions(suppress=True)

# Load the model
#model = load_model(r"/content/keras_model.h5", compile=False)
model = tf.keras.models.load_model(r"keras_model.h5", compile=False) #Use tf.keras.models.load_model instead of load_model

# Load the labels
class_names = open(r"labels.txt", "r").readlines()

# Create the array of the right shape to feed into the keras model
# The 'length' or number of images you can put into the array is
# determined by the first position in the shape tuple, in this case 1
data = np.ndarray(shape=(1, 224, 224, 3), dtype=np.float32)

# Replace this with the path to your image
print("The filepath: ",sys.argv[1])
image = Image.open(fp=sys.argv[1],mode='r').convert("RGB")

# resizing the image to be at least 224x224 and then cropping from the center
size = (224, 224)
image = ImageOps.fit(image, size, Image.Resampling.LANCZOS)

# turn the image into a numpy array
image_array = np.asarray(image)

# Normalize the image
normalized_image_array = (image_array.astype(np.float32) / 127.5) - 1

# Load the image into the array
data[0] = normalized_image_array

# Predicts the model
prediction = model.predict(data)
index = np.argmax(prediction)
class_name = class_names[index]
confidence_score = prediction[0][index]

# Print prediction and confidence score
print("Class:", class_name[2:], end="")
print("Confidence Score:", confidence_score)
with open("classification_result.txt",'w') as file:
    file.write(class_name[2:]+"  Confidence score: "+str(confidence_score)+"\n")
