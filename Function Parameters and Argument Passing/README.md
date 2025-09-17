# Object Detection C++ Exercises

This repository contains **20 C++ exercises** for learning object detection–related programming concepts using **call by value, call by reference, call by pointer, and call by const reference**.

Each topic contains **5 exercises**, with structured examples using `BoundingBox`, `Detection`, `ImageFrame`, and `Pixel` structs. These exercises are designed to build a clear understanding of parameter passing techniques in C++ and how they affect object manipulation.

---

## 📝 Topics & Exercises

### 1. Call by Value
- **Bounding Box Area Calculation** → calculate area without modifying the original.
- **Object Confidence Score Adjustment** → adjust score locally (original unchanged).
- **Frame Size Simulation** → resize frame copy inside the function.
- **Vector of Detections Check** → count invalid detections below a threshold.
- **Color Space Conversion Simulation** → convert RGB pixel to grayscale (local copy).

### 2. Call by Reference
- **In-place Bounding Box Scaling** → scale width & height directly.
- **Update Detection Coordinates** → move detection’s position by delta values.
- **Add a New Detection to a Vector** → append detection in-place.
- **Normalize Confidence Scores** → normalize all scores between 0–1.
- **Flip an ImageFrame** → simulate horizontal flip (in-place).

### 3. Call by Pointer
- **Resize a Bounding Box** → modify object through pointer.
- **Get and Print Bounding Box Info** → print info using a pointer, handle `nullptr`.
- **Update Confidence of a Detection** → update confidence via pointer.
- **Process First Detection in an Array** → modify first detection in array via pointer.
- **Swap Two Bounding Boxes** → swap contents of two boxes using pointers.

### 4. Call by const Reference
- **Print Detection Details** → safely print object details without modifying.
- **Find Highest Confidence Score** → iterate vector and return max confidence.
- **Check Bounding Box Validity** → validate if width/height > 0.
- **Count Detections of a Specific Class** → count matches for target class.
- **Compare Two Bounding Boxes** → check equality of all members.

---

## ⚡ Compilation & Execution

Each exercise is a standalone `.cpp` file. Compile with `g++` and run:

```bash
g++ BoundingBoxArea.cpp -o BoundingBoxArea
./BoundingBoxArea
