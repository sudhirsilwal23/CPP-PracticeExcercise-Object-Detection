# ⚡ C++ Passing Lambdas to Functions Exercises 

---

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

## 🚀 How to Compile & Run

Each exercise is a standalone `.cpp` file.  

Compile and run with:

```bash
# Compile
g++ -std=c++17 Exercise01.cpp -o Exercise01

# Run
./Exercise01
