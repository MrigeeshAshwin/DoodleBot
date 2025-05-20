1. Image Loading and Preprocessing
2. Color Based masking : A binary mask is created by thresholding the HSV image to isolate regions of the marked areas.
3. Morphological Cleaning : Morphological closing is applied to the binary mask to fill small holes and connect disjointed segments.
4. Skeletonization : The cleaned binary mask is skeletonized using scikit-image’s skeletonize function
5. Path Visualization : The coordinates of the skeleton pixels are extracted using numpy and are overlaid as red dots on the original image.
