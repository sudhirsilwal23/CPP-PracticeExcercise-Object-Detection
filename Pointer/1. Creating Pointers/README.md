# C++ Pointer Exercises 

---

### Exercise 1.1: Bounding Box Pointer   
Define a struct `BoundingBox` with `x, y, width, height` members. Create a `BoundingBox` object and a pointer that points to it. Print the address stored in the pointer.

### Exercise 1.2: Class for Detected Objects   
Create a `DetectedObject` class with a string for label (e.g., `"car"`, `"person"`) and a `BoundingBox` member. Instantiate a `DetectedObject` on the heap using `new` and store its address in a pointer. Remember to use `delete` to free the memory.

### Exercise 1.3: Array of Pointers   
Simulate a scenario where you have multiple detected objects. Create an array of pointers to `DetectedObject` objects. Populate this array by dynamically allocating a few objects.

### Exercise 1.4: Pointer to a Pointer  
Create a `DetectedObject` and a pointer `ptr1` to it. Then, create a second pointer `ptr2` that points to `ptr1`. Use `ptr2` to access the memory address of the object.

### Exercise 1.5: Function with a Pointer Argument ⚙  
Write a function `processObject(DetectedObject* obj)` that takes a pointer to a `DetectedObject` as an argument. Inside the function, print the object's label. Call this function with a dynamically allocated object.

---

## How to Compile & Run

Each exercise is written as a **separate `.cpp` file**.

Compile and run an example:

```bash
# Compile
g++ -std=c++11 "Exercise 1.1 Bounding Box Pointer.cpp" -o ex1_1

# Run
./ex1_1
