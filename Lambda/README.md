# C++ Lambda Exercises for Object Detection

This folder contains **advanced C++ lambda function exercises** applied to object detection tasks (e.g., bounding boxes, confidence scores, IOU calculations).  

The exercises are organized into sections:  

- **Basic Lambdas**  
- **Lambdas with Parameters**  
- **Passing to Functions**  
- **Loops**  
- **Capture Clauses**  
- **Comparisons with Regular Functions**  

---

## 📝 Topics & Exercises

### 1. Basic Lambda Examples
1. **Confidence Thresholding** → Write a lambda to count all detected objects with a confidence score above a user-defined threshold.  
2. **Class Filtering** → Use a lambda to count how many objects of a specific class (e.g., 'car') were detected.  
3. **Area Check** → Create a lambda to check if any detected object's bounding box area is smaller than 100 pixels.  
4. **Empty Detections** → Write a lambda to check if the vector of detections is empty.  
5. **Score Averaging** → Use a lambda with `std::accumulate` to calculate the average confidence score of all detected objects.  

---

### 2. Lambda with Parameters
6. **Detailed Object Info** → Write a lambda that takes a `DetectedObject` as a parameter and prints its ID, class, and confidence score.  
7. **Confidence Normalization** → Create a lambda that takes a `DetectedObject` by reference and normalizes its confidence score to a range between 0 and 1.  
8. **IOU Calculation** → Write a lambda that takes two `DetectedObjects` and calculates their Intersection over Union (IOU).  
9. **Scaling Bounding Boxes** → Use a lambda that takes a `DetectedObject` and a scaling factor to resize its bounding box dimensions.  
10. **Distance from Center** → Create a lambda that takes a `DetectedObject` and calculates the Euclidean distance of its bounding box center from the image center.  

---

### 3. Passing Lambdas to Functions
11. **Custom Sorting** → Create a `sort_detections` function that takes a vector of `DetectedObjects` and a custom comparison lambda.  
12. **Generic Filtering** → Write a `filter_detections` function that takes a vector of `DetectedObjects` and a boolean-returning lambda.  
13. **Applying Transformations** → Develop an `apply_to_detections` function that takes a vector and a void-returning lambda.  
14. **Finding Best Match** → Implement a `find_best_match` function that takes a target object and a lambda to define match criteria.  
15. **Batch Processing** → Write a `process_batch` function that takes a subset of detections and a lambda to perform a batch task.  

---

### 4. Using Lambdas in Loops
16. **Per-Object Logging** → Use a range-based for loop and a lambda to log details of each detection.  
17. **Conditional Drawing** → Use a lambda to draw bounding boxes only for objects above a threshold.  
18. **Dynamic Thresholding** → Apply class-specific confidence thresholds using a lambda in a loop.  
19. **Bounding Box Intersection** → Use a lambda inside a nested loop to check intersection between boxes.  
20. **Counting by Class** → Use a lambda to tally the number of objects per class.  

---

### 5. Capture Clause [] and Capture by Reference
21. **Bounding Box Coordinates** → Use a lambda with captured image dimensions to validate bounding box position.  
22. **Global Counter** → Capture a counter by reference (`[&]`) to track processed objects.  
23. **Image Modification** → Capture by reference to modify an image (e.g., draw bounding boxes).  
24. **Confidence Threshold** → Capture a confidence threshold variable by reference to filter dynamically.  
25. **Log File Handle** → Capture a file stream by reference to log detections.  

---

### 6. Regular Functions vs. Lambda Functions
26. **Reusability** → Compare a reusable `calculate_iou` function with a one-off lambda for IOU.  
27. **Custom Sorting** → Compare a named `compare_by_confidence` function with a lambda in `std::sort`.  
28. **Simple vs. Complex Logic** → Compare a `print_object_info` function with a lambda version that adds inline filtering.  
29. **Performance** → Compare function vs lambda for bounding box area calculation.  
30. **Callback Use Case** → Show how both named functions and lambdas can be used as callbacks in `run_inference`.  

---

## 📂 Suggested Folder Structure

