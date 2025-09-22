# C++ Regular Functions vs. Lambdas Exercises 

---

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

## How to Compile & Run

Each exercise is a standalone `.cpp` file.  

Compile and run with:

```bash
# Compile
g++ -std=c++17 Exercise01.cpp -o Exercise01

# Run
./Exercise01
