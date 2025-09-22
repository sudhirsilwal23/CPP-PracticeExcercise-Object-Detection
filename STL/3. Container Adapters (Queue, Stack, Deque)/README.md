# C++ STL Container Adapters (Queue, Stack, Deque) Exercises

---

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
- Every time a bounding box is added/modified, push its previous state to a `std::stack<BoundingBox>`
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

## How to Compile and Run

Each exercise is provided as a standalone `.cpp` file.  
To compile and run:

```bash
# Compile
g++ -std=c++17 exercise_name.cpp -o exercise_name

# Run
./exercise_name
