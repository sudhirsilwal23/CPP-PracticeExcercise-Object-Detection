# Object Detection C++ Exercises

This folder contains **20 C++ exercises** for learning object detection–related programming concepts using **call by value, call by reference, call by pointer, and call by const reference**.

---

## 📝 Topics & Exercises

### 1. Call by Value
1. **Bounding Box Area Calculation** → calculate area without modifying the original.  
2. **Object Confidence Score Adjustment** → adjust score locally (original unchanged).  
3. **Frame Size Simulation** → resize frame copy inside the function.  
4. **Vector of Detections Check** → count invalid detections below a threshold.  
5. **Color Space Conversion Simulation** → convert RGB pixel to grayscale (local copy).  

### 2. Call by Reference
6. **In-place Bounding Box Scaling** → scale width & height directly.  
7. **Update Detection Coordinates** → move detection’s position by delta values.  
8. **Add a New Detection to a Vector** → append detection in-place.  
9. **Normalize Confidence Scores** → normalize all scores between 0–1.  
10. **Flip an ImageFrame** → simulate horizontal flip (in-place).  

### 3. Call by Pointer
11. **Resize a Bounding Box** → modify object through pointer.  
12. **Get and Print Bounding Box Info** → print info using a pointer, handle `nullptr`.  
13. **Update Confidence of a Detection** → update confidence via pointer.  
14. **Process First Detection in an Array** → modify first detection in array via pointer.  
15. **Swap Two Bounding Boxes** → swap contents of two boxes using pointers.  

### 4. Call by const Reference
16. **Print Detection Details** → safely print object details without modifying.  
17. **Find Highest Confidence Score** → iterate vector and return max confidence.  
18. **Check Bounding Box Validity** → validate if width/height > 0.  
19. **Count Detections of a Specific Class** → count matches for target class.  
20. **Compare Two Bounding Boxes** → check equality of all members.  

---

## ⚡ Compilation & Execution

Each exercise is a standalone `.cpp` file. Compile with `g++` and run:

```bash
g++ Exercise1.cpp -o Exercise1
./Exercise1
