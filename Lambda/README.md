# ⚡ C++ Lambda Exercises 

This folder contains **advanced C++ lambda function exercises** applied to object detection tasks (bounding boxes, confidence scores, IOU calculations, etc.).  

The exercises are organized into sections:  

- **Basic Lambdas**  
- **Lambdas with Parameters**  
- **Passing to Functions**  
- **Using Lambdas in Loops**  
- **Capture Clauses**  
- **Regular Functions vs. Lambdas**  

---

## 📝 Topics & Exercises

---

### 1. Basic Lambda Examples

- **Exercise 1. Confidence Thresholding**  
  Write a lambda to count all detected objects with a confidence score above a user-defined threshold.  

- **Exercise 2. Class Filtering**  
  Use a lambda to count how many objects of a specific class (e.g., `"car"`) were detected.  

- **Exercise 3. Area Check**  
  Create a lambda to check if any detected object's bounding box area is smaller than `100` pixels.  

- **Exercise 4. Empty Detections**  
  Write a lambda to check if the vector of detections is empty.  

- **Exercise 5. Score Averaging**  
  Use a lambda with `std::accumulate` to calculate the average confidence score of all detected objects.  

---

### 2. Lambda with Parameters

- **Exercise 6. Detailed Object Info**  
  Write a lambda that takes a `DetectedObject` as a parameter and prints its ID, class, and confidence score.  

- **Exercise 7. Confidence Normalization**  
  Create a lambda that takes a `DetectedObject` by reference and normalizes its confidence score to a range between `0` and `1`.  

- **Exercise 8. IOU Calculation**  
  Write a lambda that takes two `DetectedObjects` and calculates their Intersection over Union (IOU).  

- **Exercise 9. Scaling Bounding Boxes**  
  Use a lambda that takes a `DetectedObject` and a scaling factor to resize its bounding box dimensions.  

- **Exercise 10. Distance from Center**  
  Create a lambda that takes a `DetectedObject` and calculates the Euclidean distance of its bounding box center from the image center.  

---

### 3. Passing Lambdas to Functions

- **Exercise 11. Custom Sorting**  
  Create a `sort_detections` function that takes a vector of `DetectedObjects` and a custom comparison lambda.  
  Use it to sort the objects by confidence, from highest to lowest.  

- **Exercise 12. Generic Filtering**  
  Write a `filter_detections` function that takes a vector of `DetectedObjects` and a boolean-returning lambda.  
  Use it to filter out objects based on a dynamic condition (e.g., filtering by class or size).  

- **Exercise 13. Applying Transformations**  
  Develop an `apply_to_detections` function that takes a vector and a void-returning lambda.  
  Use this to apply a transformation like printing, logging, or drawing to each object.  

- **Exercise 14. Finding Best Match**  
  Implement a `find_best_match` function that takes a target object and a lambda.  
  The lambda should define the "match" criteria (e.g., lowest distance, highest IOU).  
  The function should return the best match from a list of candidates.  

- **Exercise 15. Batch Processing**  
  Write a `process_batch` function that takes a subset of detections and a lambda.  
  Use the lambda to perform a specific task on the subset, like calculating the mean confidence for that batch.  

---

### 4. Using Lambdas in Loops

- **Exercise 16. Per-Object Logging**  
  Use a range-based for loop and a lambda to log the details of each detected object, including its class, ID, and confidence, for a specific frame.  

- **Exercise 17. Conditional Drawing**  
  Iterate through a list of detections.  
  Use a lambda inside the loop to draw a bounding box only for objects whose confidence is above a certain threshold.  

- **Exercise 18. Dynamic Thresholding**  
  In a loop, use a lambda to apply a different confidence threshold to different classes of objects (e.g., car detections need higher confidence than person detections).  

- **Exercise 19. Bounding Box Intersection**  
  Inside a nested loop (for each pair of detections), use a lambda to check if their bounding boxes intersect and print their IDs if they do.  

- **Exercise 20. Counting by Class**  
  Iterate through the detections and use a lambda to increment a counter for each class, effectively tallying the number of objects per class.  

---

### 5. Capture Clause [] and Capture by Reference

- **Exercise 21. Bounding Box Coordinates**  
  Use a lambda with a capture to check if a bounding box's coordinates are within the image dimensions, which are captured from the outer scope.  

- **Exercise 22. Global Counter**  
  Capture a counter variable by reference (`[&]`) to count the total number of processed objects across multiple processing steps.  

- **Exercise 23. Image Modification**  
  Use a lambda with a reference capture to modify an image matrix (e.g., a `cv::Mat`) by drawing a bounding box on it for each detected object.  

- **Exercise 24. Confidence Threshold**  
  Capture a user-defined confidence threshold value by reference to create a filter lambda.  
  The filter can be dynamically updated by changing the captured variable's value.  

- **Exercise 25. Log File Handle**  
  Capture a reference to an open file stream to write logging information about each detection to a single file.  

---

### 6. Regular Functions vs. Lambda Functions

- **Exercise 26. Reusability**  
  Write a reusable `calculate_iou` regular function.  
  Then, write a one-off lambda to calculate the IOU for a specific pair of overlapping detections in a single-frame analysis.  

- **Exercise 27. Custom Sorting**  
  Create a named function `compare_by_confidence` to sort detections.  
  Then, create an equivalent lambda and use `std::sort` with it to achieve the same result.  
  Discuss the benefits of each approach.  

- **Exercise 28. Simple vs. Complex Logic**  
  Write a simple `print_object_info` regular function.  
  Then, create a lambda to do the same but with an added in-line check for confidence to decide whether to print or not, demonstrating the concise, specific use of lambdas.  

- **Exercise 29. Performance**  
  Write both a regular function and a lambda to perform a simple bounding box area calculation.  
  Measure their performance to highlight that for such simple tasks, there is often negligible performance difference.  

- **Exercise 30. Callback Use Case**  
  Design a mock `run_inference` function that accepts a function pointer or `std::function` as a callback for post-processing.  
  Show how a named function can be passed as the callback, and then show how a lambda can be used instead for more concise, context-specific post-processing.  

---

## 🚀 How to Compile & Run

Each exercise is a standalone `.cpp` file.  

Compile and run with:

```bash
# Compile
g++ -std=c++17 Exercise01.cpp -o Exercise01

# Run
./Exercise01
