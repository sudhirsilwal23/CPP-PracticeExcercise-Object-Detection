# 🎯 C++ Call by const Reference Exercises 

---

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
