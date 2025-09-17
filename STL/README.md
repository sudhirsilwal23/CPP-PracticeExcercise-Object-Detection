# 📚 C++ Exercises: Object Detection and STL Containers

This folder contains **C++ exercises** for practicing **object detection concepts** while learning how to use different **C++ Standard Template Library (STL) containers, algorithms, and lambdas**.  

The exercises are organized into sections:  

- **Sequential Containers (Vector, List, Array)**  
- **Associative Containers (Map, Set)**  
- **Container Adapters (Queue, Stack, Deque)**  
- **C++ Algorithms with Lambda Functions**  

---

## 📝 Topics & Exercises

---

## 📦 Sequential Containers (Vector, List, Array)

### Exercise 1. Object Bounding Boxes with `std::vector`  
Write a C++ program that defines a struct or class named `BoundingBox` with members for coordinates `(x, y, width, height)`.  
Create a `std::vector<BoundingBox>` to store the detected objects from an image.  
Write a function to calculate and print the area of each bounding box and the total area of all bounding boxes.

---

### Exercise 2. Tracking Objects with `std::list`  
Implement a simple object tracker.  
Define a struct `TrackedObject` with an ID and its current position.  
Use a `std::list` to manage the active tracked objects.  
When a new detection comes in:  
- Iterate through the list to find a match (based on proximity).  
- If a match is found, update its position.  
- If not, add a new `TrackedObject` to the list.  
- Remove objects that haven't been seen for a while.  

---

### Exercise 3. Static Bounding Box Storage with C-style Array  
Create a program that uses a C-style array (`BoundingBox boxes[100];`) to store a fixed number of bounding boxes.  
Populate the array with sample data.  
Write a function to find the bounding box with:  
- The **largest width**  
- The **smallest height**

---

### Exercise 4. Resizing Bounding Box Storage with `std::vector`  
Simulate object detection over multiple frames.  
Start with an empty `std::vector<BoundingBox>`.  
In each frame, add a random number of new `BoundingBox` objects to the vector.  
Print the **size** and **capacity** of the vector after each addition to show how it resizes automatically.  

---

### Exercise 5. Managing Object IDs with `std::list`  
Define a class `ObjectDetector` that maintains a list of detected objects.  
Use a `std::list<int>` to keep track of unique IDs of all detected objects.  
- When a new object is detected, add its ID.  
- When an object is lost, remove its ID.  
This demonstrates efficient insertion and removal in the middle of the list.  

---

## 🔑 Associative Containers (Map, Set)

### Exercise 6. Counting Detected Objects with `std::map`  
Define a struct `DetectedObject` with a string `label` (e.g., `"car"`, `"pedestrian"`).  
Use `std::map<std::string, int>` to count the occurrences of each type of object.  
Iterate through a collection of detections, populate the map, and print the results.  

---

### Exercise 7. Managing Unique Object IDs with `std::set`  
Ensure each tracked object has a unique ID.  
Use `std::set<int>` to store IDs.  
- When generating a new ID, check with `find()` if it already exists.  
- If not, insert it into the set.  

---

### Exercise 8. Mapping Object IDs to Properties with `std::map`  
Define a struct `ObjectProperties` with fields like `color`, `speed`, and `confidence_score`.  
Create a `std::map<int, ObjectProperties>` where the key is the object ID.  
Write a function that accepts an object ID and prints all its properties.  

---

### Exercise 9. Finding Unique Object Labels with `std::set`  
Given a `std::vector<DetectedObject>` with string labels, use a `std::set<std::string>` to find all **unique labels**.  
Print the unique labels.  

---

### Exercise 10. Efficient Lookup of Objects with `std::map`  
Store bounding boxes in a `std::map<int, BoundingBox>` where the key is the unique ID.  
Write a function to **lookup a bounding box by ID** efficiently.  
Highlight how lookup in a `map` is faster than linear search.  

---

## ⏳ Container Adapters (Queue, Stack, Deque)

### Exercise 11. Processing Detections in Order with `std::queue`  
Simulate a stream of detections using `std::queue<BoundingBox>`.  
Write a loop that:  
- Pops detections from the front  
- Prints their details  
- Continues until queue is empty  

This mimics a **FIFO pipeline**.  

---

### Exercise 12. Undo/Redo for Detections with `std::stack`  
In an annotation tool, implement **undo** functionality:  
- Every time a bounding box is added/modified, push its previous state to a `std::stack<BoundingBox>`.  
- On "undo", pop the last state and restore it.  

---

### Exercise 13. Double-Ended Processing with `std::deque`  
Simulate a system where:  
- High-priority detections are added to the **front** (`push_front()`).  
- Regular detections are added to the **back** (`push_back()`).  
Process detections from the front in priority order.  

---

### Exercise 14. Managing Recently Processed Detections with `std::stack`  
Maintain a history of the **last 5 detections**:  
- Push each new detection onto the stack.  
- If size exceeds 5, remove the oldest one (bottom).  

---

### Exercise 15. Sequential Processing of Images with `std::queue`  
Use `std::queue<std::string>` to store image file paths.  
Simulate sequential detection by dequeuing paths and printing:  
- `"Processing image..."`  
- `"Detection complete"`  

---

## ⚡ C++ Algorithms with Lambda Functions

### Exercise 16. Total Confidence Score (`std::accumulate`)  
Given a vector of objects with `confidence_score`, use `std::accumulate` and a lambda to compute the total.  

---

### Exercise 17. Average Bounding Box Area (`std::accumulate`)  
Use `std::accumulate` with a lambda to calculate the **average area** of bounding boxes.  

---

### Exercise 18. Copying Valid Detections (`std::copy_if`)  
Filter a vector of detections to a new vector where confidence ≥ 0.5.  

---

### Exercise 19. Copying Bounding Boxes to a Sub-vector (`std::copy`)  
Use `std::copy` to copy the first `N` bounding boxes from a larger vector.  

---

### Exercise 20. Counting Specific Object Labels (`std::count_if`)  
Count how many `"pedestrian"` objects are present in a vector.  

---

### Exercise 21. Counting Small Bounding Boxes (`std::count_if`)  
Count bounding boxes with **area < threshold**.  

---

### Exercise 22. Finding a Specific Object ID (`std::find_if`)  
Find the bounding box with a given ID.  

---

### Exercise 23. Finding First Low-Confidence Detection (`std::find_if`)  
Locate the first detection with confidence < 0.5.  

---

### Exercise 24. Highest Confidence Score (`std::max_element`)  
Find the detection with the **highest confidence**.  

---

### Exercise 25. Smallest Bounding Box Area (`std::min_element`)  
Find the bounding box with the **smallest area**.  

---

### Exercise 26. Replacing Low-Confidence Labels (`std::replace_if`)  
Change all labels with confidence < 0.5 to `"unverified"`.  

---

### Exercise 27. Replacing Zero-Area Boxes (`std::replace_if`)  
Replace bounding boxes with area = 0 with default coordinates.  

---

### Exercise 28. Reversing Detection Order (`std::reverse`)  
Reverse the entire vector of detections.  

---

### Exercise 29. Reversing Specific Bounding Boxes (`std::reverse`)  
Reverse only a subset of bounding boxes (e.g., indices 5–10).  

---

### Exercise 30. Sorting by Confidence Score (`std::sort`)  
Sort detections by confidence in **descending order**.  

---

### Exercise 31. Sorting by Bounding Box Area (`std::sort`)  
Sort bounding boxes by area in ascending order.  

---

### Exercise 32. Sorting by Distance from Center (`std::sort`)  
Sort bounding boxes by distance from the image center.  

---

### Exercise 33. Multi-Criteria Sorting (`std::sort`)  
Sort detections:  
1. By label alphabetically  
2. Then by confidence (descending)  

---

### Exercise 34. Sorting and Grouping (`std::sort`)  
Sort detections by label, then group and process each group.  

---

### Exercise 35. Combined Exercise: Filter, Sort, and Accumulate  
- Use `std::remove_if` to filter out low-confidence detections.  
- Sort remaining by bounding box area.  
- Use `std::accumulate` to calculate total area.  

---

## 🚀 How to Compile and Run

Each exercise is provided as a standalone `.cpp` file.  
To compile and run:

```bash
# Compile
g++ -std=c++17 exercise_name.cpp -o exercise_name

# Run
./exercise_name
