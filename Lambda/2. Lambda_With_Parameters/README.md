# C++ Lambdas with Parameters Exercises 

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


## How to Compile & Run

Each exercise is a standalone `.cpp` file.  

Compile and run with:

```bash
# Compile
g++ -std=c++17 Exercise01.cpp -o Exercise01

# Run
./Exercise01
