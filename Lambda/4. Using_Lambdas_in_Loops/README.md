# C++ Using Lambdas in Loops Exercises 

---

- **Exercise 16. Per-Object Logging**  
  Use a range-based for loop and a lambda to log the details of each detected object, including its class, ID, and confidence, for a specific frame.  

- **Exercise 17. Conditional Drawing**  
  Iterate through a list of detections.  
  Use a lambda inside the loop to draw a bounding box only for objects whose confidence is above a certain threshold.  

- **Exercise 18. Dynamic Thresholding**  
  In a loop, use a lambda to apply a different confidence threshold to different classes of objects (e.g., car detections need higher confidence than person detections).  

- **Exercise 19. Bounding Box Intersection**  
  Inside a nested loop (for each pair of detections), use a lambda to check if their bounding boxes intersect and print their IDs if they do.  

- **Exercise 20. Counting by Class**  
  Iterate through the detections and use a lambda to increment a counter for each class, effectively tallying the number of objects per class.  

---

## How to Compile & Run

Each exercise is a standalone `.cpp` file.  

Compile and run with:

```bash
# Compile
g++ -std=c++17 Exercise01.cpp -o Exercise01

# Run
./Exercise01
