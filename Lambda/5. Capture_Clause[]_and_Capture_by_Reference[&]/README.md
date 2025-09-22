# ⚡ C++ Capture Clause [] and Capture by Reference[&] Exercises 

---

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

## 🚀 How to Compile & Run

Each exercise is a standalone `.cpp` file.  

Compile and run with:

```bash
# Compile
g++ -std=c++17 Exercise01.cpp -o Exercise01

# Run
./Exercise01
