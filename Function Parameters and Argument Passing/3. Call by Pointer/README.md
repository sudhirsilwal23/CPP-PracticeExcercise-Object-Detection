# 🎯 C++ Call by Pointer Exercises 

---

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

## ⚡ How to Compile and Run

Each exercise is a standalone `.cpp` file. Compile with `g++` and run:

```bash
# Compile
g++ Exercise1.cpp -o Exercise1

# Run
./Exercise1
