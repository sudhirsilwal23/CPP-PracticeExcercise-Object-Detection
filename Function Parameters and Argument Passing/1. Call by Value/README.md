# 🎯 C++ Function Parameters and Argument Passing Exercises 

This folder contains **20 C++ exercises** for learning object detection–related programming concepts using **call by value**.

---

## 📝 Topics & Exercises

### 1. Call by Value

- **Exercise 1. Bounding Box Area Calculation**  
  Write a function `calculateArea` that takes a `BoundingBox` object by value and returns its area.  
  The `BoundingBox` struct should contain `x, y, width, and height` members.  
  The function should not modify the original object.  

- **Exercise 2. Object Confidence Score Adjustment**  
  Create a function `adjustConfidence` that takes a `Detection` object by value.  
  The function should increase the object's confidence score by `0.1` and then print the new score.  
  Demonstrate that the original object's confidence remains unchanged.  

- **Exercise 3. Frame Size Simulation**  
  Write a function `simulateFrameResize` that takes an `ImageFrame` object by value.  
  The function should modify the width and height of the local copy to new dimensions (e.g., `640x480`) and print them.  
  Show that the original `ImageFrame` outside the function is unaffected.  

- **Exercise 4. Vector of Detections Check**  
  Create a function `countInvalidDetections` that takes a `std::vector<Detection>` by value.  
  The function should iterate through the vector and count how many detections have a confidence score below a threshold (e.g., `0.5`).  

- **Exercise 5. Color Space Conversion Simulation**  
  Write a function `convertColorSpace` that takes a `Pixel` struct by value.  
  Inside the function, change the `r, g, and b` values to simulate a grayscale conversion (e.g., `(r+g+b)/3`).  
  Print the new pixel values and confirm the original `Pixel` is unchanged.  


---

## ⚡ How to Compile and Run

Each exercise is a standalone `.cpp` file. Compile with `g++` and run:

```bash
# Compile
g++ Exercise1.cpp -o Exercise1

# Run
./Exercise1
