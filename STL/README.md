# C++ Exercises: Object Detection and STL Containers

This folder contains **C++ exercises** for practicing **object detection concepts** while learning how to use different **C++ Standard Template Library (STL) containers, algorithms, and lambdas**.  

The exercises are organized into sections:  

- **Sequential Containers (Vector, List, Array)**  
- **Associative Containers (Map, Set)**  
- **Container Adapters (Queue, Stack, Deque)**  
- **C++ Algorithms with Lambda Functions**  

---

## 📝 Topics & Exercises

## 📦 Sequential Containers (Vector, List, Array)

1. **Object Bounding Boxes with `std::vector`**  
   - Define a `BoundingBox` struct with `(x, y, width, height)`.  
   - Store detections in a `std::vector<BoundingBox>`.  
   - Write a function to compute each bounding box area and the total area.  

2. **Tracking Objects with `std::list`**  
   - Define a `TrackedObject` with an ID and position.  
   - Use `std::list` to manage active tracked objects.  
   - Update position if a match is found, otherwise add a new object.  
   - Remove objects not seen for a while.  

3. **Static Bounding Box Storage with C-style Array**  
   - Use `BoundingBox boxes[100]` to store detections.  
   - Find bounding box with **largest width** and **smallest height**.  

4. **Resizing Bounding Box Storage with `std::vector`**  
   - Simulate detection across frames.  
   - Add random new `BoundingBox` objects each frame.  
   - Print vector **size** and **capacity** after additions.  

5. **Managing Object IDs with `std::list`**  
   - Define `ObjectDetector` class.  
   - Maintain active object IDs in `std::list<int>`.  
   - Add IDs when detected, remove when lost.  

---

## 🔑 Associative Containers (Map, Set)

6. **Counting Detected Objects with `std::map`**  
   - Count occurrences of labels (e.g., `"car"`, `"pedestrian"`) using `std::map<std::string, int>`.  

7. **Managing Unique Object IDs with `std::set`**  
   - Store IDs in `std::set<int>` to ensure uniqueness.  
   - Check for collisions before inserting.  

8. **Mapping Object IDs to Properties with `std::map`**  
   - Define `ObjectProperties` (color, speed, confidence).  
   - Map IDs to properties and print them.  

9. **Finding Unique Object Labels with `std::set`**  
   - Extract unique labels from detections using `std::set<std::string>`.  

10. **Efficient Lookup with `std::map`**  
    - Use `std::map<int, BoundingBox>` for O(log n) lookups.  
    - Quickly find bounding box by ID.  

---

## ⏳ Container Adapters (Queue, Stack, Deque)

11. **Processing Detections with `std::queue`**  
    - Use `std::queue<BoundingBox>` to process detections FIFO style.  

12. **Undo/Redo for Detections with `std::stack`**  
    - Store previous states of bounding boxes in a stack.  
    - Pop last state to undo.  

13. **Double-Ended Processing with `std::deque`**  
    - Push high-priority detections to front (`push_front`).  
    - Push regular detections to back (`push_back`).  
    - Process from front.  

14. **Managing Recently Processed Detections with `std::stack`**  
    - Keep last 5 detections in a stack.  
    - Discard oldest when full.  

15. **Sequential Processing of Images with `std::queue`**  
    - Store image paths in `std::queue<std::string>`.  
    - Simulate sequential detection pipeline.  

---

## ⚡ C++ Algorithms with Lambda Functions

16. **Total Confidence Score (`std::accumulate`)**  
    - Sum confidence scores of detections with a lambda.  

17. **Average Bounding Box Area (`std::accumulate`)**  
    - Calculate average area using lambda with `std::accumulate`.  

18. **Copying Valid Detections (`std::copy_if`)**  
    - Copy detections above confidence threshold to new vector.  

19. **Copying Subset of Bounding Boxes (`std::copy`)**  
    - Copy first N bounding boxes into sub-vector.  

20. **Counting Specific Labels (`std::count_if`)**  
    - Count `"pedestrian"` detections using a lambda.  

21. **Counting Small Bounding Boxes (`std::count_if`)**  
    - Count bounding boxes with area below threshold.  

22. **Finding Specific Object ID (`std::find_if`)**  
    - Locate bounding box with target ID.  

23. **Finding Low-Confidence Detection (`std::find_if`)**  
    - Find first detection with confidence < threshold.  

24. **Highest Confidence (`std::max_element`)**  
    - Find detection with max confidence.  

25. **Smallest Bounding Box (`std::min_element`)**  
    - Find box with smallest area.  

26. **Replacing Low-Confidence Labels (`std::replace_if`)**  
    - Replace label with `"unverified"` if confidence < threshold.  

27. **Replacing Zero-Area Boxes (`std::replace_if`)**  
    - Replace invalid bounding boxes with defaults.  

28. **Reversing Detection Order (`std::reverse`)**  
    - Reverse vector of detections.  

29. **Reversing Subset of Boxes (`std::reverse`)**  
    - Reverse bounding boxes between two indices.  

30. **Sorting by Confidence Score (`std::sort`)**  
    - Sort detections in descending order of confidence.  

31. **Sorting by Bounding Box Area (`std::sort`)**  
    - Sort bounding boxes by area ascending.  

32. **Sorting by Distance from Center (`std::sort`)**  
    - Sort boxes by distance from image center.  

33. **Multi-Criteria Sorting (`std::sort`)**  
    - Sort detections by label, then confidence.  

34. **Sorting and Grouping (`std::sort`)**  
    - Group detections by label after sorting.  

35. **Combined Exercise (Filter, Sort, Accumulate)**  
    - Remove low-confidence detections with `std::remove_if`.  
    - Sort remaining detections by area.  
    - Use `std::accumulate` to sum total area.  

---

## 🚀 How to Compile and Run

Each exercise is a standalone `.cpp` file. Compile with:

```bash
g++ -std=c++17 exercise_name.cpp -o exercise_name
./exercise_name
