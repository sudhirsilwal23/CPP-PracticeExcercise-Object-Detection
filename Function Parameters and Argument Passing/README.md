# 🎯 C++ Function Parameters and Argument Passing Exercises 

This folder contains **20 C++ exercises** for learning object detection–related programming concepts using **call by value, call by reference, call by pointer, and call by const reference**.

The exercises are organized into sections:  

- **Call by Value**  
- **Call by Reference**  
- **Call by Pointer**  
- **Call by const Reference**  

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

### 2. Call by Reference

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

### 3. Call by Pointer

- **Exercise 11. Resize a Bounding Box**  
  Write a function `resizeBoundingBoxPtr` that takes a pointer to a `BoundingBox` object.  
  The function should modify the width and height members of the object pointed to.  
  Check that the original object is changed.  

- **Exercise 12. Get and Print Bounding Box Info**  
  Create a function `printBoxInfo` that takes a pointer to a `BoundingBox`.  
  The function should dereference the pointer to access and print the `x, y, width, and height` of the box.  
  Handle the case where the pointer might be `nullptr`.  

- **Exercise 13. Update Confidence of a Detection**  
  Write a function `updateConfidencePtr` that takes a pointer to a `Detection` object.  
  The function should set the confidence score to a new value.  
  Demonstrate that the original object's confidence is updated.  

- **Exercise 14. Process First Detection in an Array**  
  Create a function `processFirstDetection` that takes a pointer to an array of `Detection` objects.  
  The function should access and modify the first `Detection` in the array (e.g., set its confidence to `1.0`).  

- **Exercise 15. Swap Two Bounding Boxes**  
  Write a function `swapBoxes` that takes two pointers to `BoundingBox` objects.  
  The function should swap the contents of the two objects they point to.  
  Demonstrate the swap by printing the boxes' dimensions before and after the function call.  

---

### 4. Call by const Reference

- **Exercise 16. Print Detection Details**  
  Write a function `printDetectionDetails` that takes a `Detection` object by const reference.  
  The function should access and print all members of the object (e.g., coordinates, class, confidence).  
  The function should not be able to modify the object.  

- **Exercise 17. Find Highest Confidence Score**  
  Create a function `findHighestConfidence` that takes a `std::vector<Detection>` by const reference.  
  The function should iterate through the vector and return the highest confidence score found.  
  The function should not modify the input vector.  

- **Exercise 18. Check Bounding Box Validity**  
  Write a function `isValidBox` that takes a `BoundingBox` by const reference.  
  The function should return `true` if the width and height are both greater than zero, and `false` otherwise.  
  The function should not modify the box.  

- **Exercise 19. Count Detections of a Specific Class**  
  Create a function `countClassDetections` that takes a `std::vector<Detection>` by const reference and a `targetClass` string.  
  The function should return the number of detections that match the `targetClass`.  

- **Exercise 20. Compare Two Bounding Boxes**  
  Write a function `areBoxesEqual` that takes two `BoundingBox` objects by const reference.  
  The function should return `true` if all members (`x, y, width, height`) are identical, and `false` otherwise.  

---

## ⚡ How to Compile and Run

Each exercise is a standalone `.cpp` file. Compile with `g++` and run:

```bash
# Compile
g++ Exercise1.cpp -o Exercise1

# Run
./Exercise1
