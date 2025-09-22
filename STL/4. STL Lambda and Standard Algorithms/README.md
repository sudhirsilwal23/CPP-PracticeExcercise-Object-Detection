# C++ STL (Algorithms with Lambda Functions) Exercises

---

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

## How to Compile and Run

Each exercise is provided as a standalone `.cpp` file.  
To compile and run:

```bash
# Compile
g++ -std=c++17 exercise_name.cpp -o exercise_name

# Run
./exercise_name
