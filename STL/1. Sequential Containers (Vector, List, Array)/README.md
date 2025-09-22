# C++ STL Containers(Sequential Containers (Vector, List, Array) Exercises

---

### Exercise 1. Object Bounding Boxes with `std::vector`  
Write a C++ program that defines a struct or class named `BoundingBox` with members for coordinates `(x, y, width, height)`.  
Create a `std::vector<BoundingBox>` to store the detected objects from an image.  
Write a function to calculate and print the area of each bounding box and the total area of all bounding boxes.


### Exercise 2. Tracking Objects with `std::list`  
Implement a simple object tracker.  
Define a struct `TrackedObject` with an ID and its current position.  
Use a `std::list` to manage the active tracked objects.  
When a new detection comes in:  
- Iterate through the list to find a match (based on proximity).  
- If a match is found, update its position.  
- If not, add a new `TrackedObject` to the list.  
- Remove objects that haven't been seen for a while.  


### Exercise 3. Static Bounding Box Storage with C-style Array  
Create a program that uses a C-style array (`BoundingBox boxes[100];`) to store a fixed number of bounding boxes.  
Populate the array with sample data.  
Write a function to find the bounding box with:  
- The **largest width**  
- The **smallest height**


### Exercise 4. Resizing Bounding Box Storage with `std::vector`  
Simulate object detection over multiple frames.  
Start with an empty `std::vector<BoundingBox>`.  
In each frame, add a random number of new `BoundingBox` objects to the vector.  
Print the **size** and **capacity** of the vector after each addition to show how it resizes automatically.  


### Exercise 5. Managing Object IDs with `std::list`  
Define a class `ObjectDetector` that maintains a list of detected objects.  
Use a `std::list<int>` to keep track of unique IDs of all detected objects.  
- When a new object is detected, add its ID.  
- When an object is lost, remove its ID.  
This demonstrates efficient insertion and removal in the middle of the list.  

---

## How to Compile and Run

Each exercise is provided as a standalone `.cpp` file.  
To compile and run:

```bash
# Compile
g++ -std=c++17 exercise_name.cpp -o exercise_name

# Run
./exercise_name
