Path Extraction from Hand-Drawn Image

Load Image: Loads the image (original_image.jpg) and converts it to RGB for display.
Color Masking: Converts the image to HSV, isolates purple markings using a defined range, and creates a binary mask.
Clean Mask: Applies morphological operations to remove noise from the mask.
Skeletonize: Uses scikit-image to skeletonize the mask into a 1-pixel-wide path.
Extract Coordinates: Gets the (x, y) coordinates of the skeleton pixels.
Overlay Points: Draws the coordinates as red dots on the original image.
Save Coordinates: Saves the coordinates to paths.csv and downloads the file
