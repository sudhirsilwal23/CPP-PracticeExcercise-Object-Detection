# C++ Call by Reference Exercises 

---

- **Exercise 6. In-place Bounding Box Scaling**  
  Write a function `scaleBoundingBox` that takes a `BoundingBox` object by reference.  
  The function should multiply the width and height of the box by a given `scaleFactor`.  
  This modification should directly affect the original object.  

- **Exercise 7. Update Detection Coordinates**  
  Create a function `updatePosition` that takes a `Detection` object by reference.  
  The function should be used to move the detection's bounding box by a given `delta_x` and `delta_y`.  
  Verify that the original object's coordinates are updated.  

- **Exercise 8. Add a New Detection to a Vector**  
  Write a function `addDetection` that takes a `std::vector<Detection>` by reference.  
  The function should append a new `Detection` object to the vector.  
  Demonstrate that the original vector now contains the new element.  

- **Exercise 9. Normalize Confidence Scores**  
  Create a function `normalizeScores` that takes a `std::vector<Detection>` by reference.  
  The function should iterate through the vector and normalize all confidence scores to be between `0 and 1`, assuming the maximum score is known.  
  The original vector should be modified directly.  

- **Exercise 10. Flip an ImageFrame**  
  Write a function `flipImageHorizontally` that takes an `ImageFrame` object by reference.  
  The function should modify the pixel data of the `ImageFrame` to simulate a horizontal flip.  
  This will be an in-place modification, altering the original image.  

---


## How to Compile and Run

Each exercise is a standalone `.cpp` file. Compile with `g++` and run:

```bash
# Compile
g++ Exercise1.cpp -o Exercise1

# Run
./Exercise1
