#  C++ STL Containers(Associative Containers (Map, Set)) Exercises

---

### Exercise 6. Counting Detected Objects with `std::map`  
Define a struct `DetectedObject` with a string `label` (e.g., `"car"`, `"pedestrian"`).  
Use `std::map<std::string, int>` to count the occurrences of each type of object.  
Iterate through a collection of detections, populate the map, and print the results.  


### Exercise 7. Managing Unique Object IDs with `std::set`  
Ensure each tracked object has a unique ID.  
Use `std::set<int>` to store IDs.  
- When generating a new ID, check with `find()` if it already exists.  
- If not, insert it into the set.  


### Exercise 8. Mapping Object IDs to Properties with `std::map`  
Define a struct `ObjectProperties` with fields like `color`, `speed`, and `confidence_score`.  
Create a `std::map<int, ObjectProperties>` where the key is the object ID.  
Write a function that accepts an object ID and prints all its properties.  


### Exercise 9. Finding Unique Object Labels with `std::set`  
Given a `std::vector<DetectedObject>` with string labels, use a `std::set<std::string>` to find all **unique labels**.  
Print the unique labels.  


### Exercise 10. Efficient Lookup of Objects with `std::map`  
Store bounding boxes in a `std::map<int, BoundingBox>` where the key is the unique ID.  
Write a function to **lookup a bounding box by ID** efficiently.  
Highlight how lookup in a `map` is faster than linear search.  


---


## 🚀 How to Compile and Run

Each exercise is provided as a standalone `.cpp` file.  
To compile and run:

```bash
# Compile
g++ -std=c++17 exercise_name.cpp -o exercise_name

# Run
./exercise_name
