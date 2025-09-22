# C++ Dereferencing Pointers Exercises 

---

### Exercise 2.1: Accessing Struct Members  
Using the `BoundingBox` struct and pointer from Exercise 1.1, dereference the pointer to print the `x, y, width, and height` of the bounding box. Use both the `*` operator and the `->` operator.

### Exercise 2.2: Calling a Class Method  
Add a method `printInfo()` to the `DetectedObject` class that prints its label and bounding box coordinates. Using the pointer created in Exercise 1.2, call the `printInfo()` method using the `->` operator.

### Exercise 2.3: Iterating Through an Array of Pointers   
Using the array of pointers from Exercise 1.3, write a loop that iterates through the array. Inside the loop, dereference each pointer to print the label of each detected object.

### Exercise 2.4: Dereferencing a Pointer to a Pointer 
Using the pointers from Exercise 1.4, use dereferencing operators (`**` or `->`) to print the label of the `DetectedObject` using only the `ptr2` variable.

### Exercise 2.5: Function with Dereferencing 
Modify the `processObject` function from Exercise 1.5 to also print the width of the bounding box of the object. This requires dereferencing the passed pointer to access the `BoundingBox` member.

---

## How to Compile & Run

Each exercise is written as a **separate `.cpp` file**.

Compile and run an example:

```bash
# Compile
g++ -std=c++11 "Exercise 1.1 Bounding Box Pointer.cpp" -o ex1_1

# Run
./ex1_1
