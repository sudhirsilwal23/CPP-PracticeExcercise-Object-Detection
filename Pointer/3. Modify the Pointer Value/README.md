# C++ Modifying Pointer Values Exercises 

---

### Exercise 3.1: Reassigning a Pointer 
Create two `BoundingBox` objects, `box1` and `box2`. Create a pointer `ptr_box` and make it point to `box1`. Print its address. Then, reassign `ptr_box` to point to `box2` and print the new address.

### Exercise 3.2: Nulling a Pointer 
Create a pointer to a dynamically allocated `DetectedObject`. After you are finished with it, use `delete` and then set the pointer to `nullptr`. Attempt to dereference the pointer afterwards to see the potential error (or how the program handles it).

### Exercise 3.3: Pointer Arithmetic on an Array ➕  
Using the array of `DetectedObject` pointers from Exercise 1.3, create a new pointer and initialize it to the beginning of the array. Use pointer arithmetic (e.g., `ptr++`) to move through the array and print each object's label.

### Exercise 3.4: Function to Swap Pointers 
Write a function `swapPointers(DetectedObject*& ptr1, DetectedObject*& ptr2)` that takes two pointers by reference and swaps their values (i.e., makes `ptr1` point to what `ptr2` was pointing to, and vice-versa). Demonstrate this with two `DetectedObject` instances.

### Exercise 3.5: Returning a Pointer from a Function 
Write a function `findLargestObject(std::vector<DetectedObject>& objects)` that iterates through a vector of `DetectedObjects` and returns a pointer to the object with the largest area (`width * height`). Create a vector, populate it, and call the function to get and print the largest object's info.

---

## How to Compile & Run

Each exercise is written as a **separate `.cpp` file**.

Compile and run an example:

```bash
# Compile
g++ -std=c++11 "Exercise 1.1 Bounding Box Pointer.cpp" -o ex1_1

# Run
./ex1_1
