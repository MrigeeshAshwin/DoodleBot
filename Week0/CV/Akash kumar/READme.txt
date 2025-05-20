In this assignment to extract the path from a hand drawn image I used various libraries like numpy,requests,skeletonize from skimage.morphology,measue from skimage,matplotlib and pandas.
I also made a user defined function show image to display results after applying various changes on the image.
1.Grayscale and Binarize
These were applied on the image to firstly reduce the color complexity form the image and then binary conversion further simplifies the image into two levels making it easier to analyze specific features. Binarizing could be done without gray scale but for that to work directly on the color image by thresholding based on one of the color channels (commonly the blue, green, or red channel).I tried blue channel it gave nearly similar results with more noises.
2.Erode
Rather than using various masking and noise filtration I preferred to go with erode as it simply removed the horizontal lines of the (lined paper) and also multiple iteration(manually checked for 8 iteration) of eroding removed many noises which further helped analyze specific features.
3.I applied median blur and also tried gaussian blur the results where mostly same .I just went with median blur also there were only significant difference with and without median blurred 
4.If we proceeded form here directly to find the contour then the problem was that multiple parallel lines were arising so to fix that skeletonize was used here to give a single line
5.After that just  we just have to find contours and extract path.