#This module is responsible for converting the image file formats from tiff and jpeg
from PIL import Image

def convert_jpg_to_tif(jpg_path, tif_path):
    
    # Open the .jpg image
    with Image.open(jpg_path) as img:
        # Convert the image to RGB mode if it's not already in that mode
        if img.mode != "RGB":
            img = img.convert("RGB")
        # Save the image as .tif
    img.save(tif_path, "TIFF")

def convert_tif_to_jpg(tiff_path, jpg_path):
    try:
        # Open the TIFF file
        with Image.open(tiff_path) as img:
            # Check if the image has an alpha channel (transparency)
            if img.mode in ("RGBA", "LA") or (img.mode == "P" and "transparency" in img.info):
                # Convert image to RGB mode (remove alpha channel)
                img = img.convert("RGB")
            else:
                # Convert to RGB mode if not already in a compatible format
                img = img.convert("RGB")
            
            # Save the image as JPG
            img.save(jpg_path, "JPEG")
        print(f"Successfully converted {tiff_path} to {jpg_path}")
    except Exception as e:
        print(f"Error converting {tiff_path} to JPG: {e}")