# ⚡ C++ Basic Lambda Exercises 

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


## 🚀 How to Compile & Run

Each exercise is a standalone `.cpp` file.  

Compile and run with:

```bash
# Compile
g++ -std=c++17 Exercise01.cpp -o Exercise01

# Run
./Exercise01
