# 🖥️ C++ Pointer Exercises in Object Detection

This folder contains a set of **C++ exercises** designed to strengthen understanding of **pointers** in the context of **image object detection**.  

The exercises are organized into sections: 

- **Creating Pointers**  
- **Dereferencing Pointers**  
- **Modifying Pointer Values**

---

## 📝 Topics & Exercises

---

## 1. Creating Pointers
These exercises focus on initializing and using pointers to manage object data.

### Exercise 1.1: Bounding Box Pointer 📦  
Define a struct `BoundingBox` with `x, y, width, height` members. Create a `BoundingBox` object and a pointer that points to it. Print the address stored in the pointer.

### Exercise 1.2: Class for Detected Objects 🤖  
Create a `DetectedObject` class with a string for label (e.g., `"car"`, `"person"`) and a `BoundingBox` member. Instantiate a `DetectedObject` on the heap using `new` and store its address in a pointer. Remember to use `delete` to free the memory.

### Exercise 1.3: Array of Pointers 📝  
Simulate a scenario where you have multiple detected objects. Create an array of pointers to `DetectedObject` objects. Populate this array by dynamically allocating a few objects.

### Exercise 1.4: Pointer to a Pointer 🕸️  
Create a `DetectedObject` and a pointer `ptr1` to it. Then, create a second pointer `ptr2` that points to `ptr1`. Use `ptr2` to access the memory address of the object.

### Exercise 1.5: Function with a Pointer Argument ⚙️  
Write a function `processObject(DetectedObject* obj)` that takes a pointer to a `DetectedObject` as an argument. Inside the function, print the object's label. Call this function with a dynamically allocated object.

---

## 2. Dereferencing Pointers
These exercises are designed to practice accessing the data that a pointer points to.

### Exercise 2.1: Accessing Struct Members 🖼️  
Using the `BoundingBox` struct and pointer from Exercise 1.1, dereference the pointer to print the `x, y, width, and height` of the bounding box. Use both the `*` operator and the `->` operator.

### Exercise 2.2: Calling a Class Method 🗣️  
Add a method `printInfo()` to the `DetectedObject` class that prints its label and bounding box coordinates. Using the pointer created in Exercise 1.2, call the `printInfo()` method using the `->` operator.

### Exercise 2.3: Iterating Through an Array of Pointers 🗂️  
Using the array of pointers from Exercise 1.3, write a loop that iterates through the array. Inside the loop, dereference each pointer to print the label of each detected object.

### Exercise 2.4: Dereferencing a Pointer to a Pointer ⛓️  
Using the pointers from Exercise 1.4, use dereferencing operators (`**` or `->`) to print the label of the `DetectedObject` using only the `ptr2` variable.

### Exercise 2.5: Function with Dereferencing ➡️  
Modify the `processObject` function from Exercise 1.5 to also print the width of the bounding box of the object. This requires dereferencing the passed pointer to access the `BoundingBox` member.

---

## 3. Modify the Pointer Value
These exercises focus on changing what a pointer points to or altering its memory address.

### Exercise 3.1: Reassigning a Pointer 🔄  
Create two `BoundingBox` objects, `box1` and `box2`. Create a pointer `ptr_box` and make it point to `box1`. Print its address. Then, reassign `ptr_box` to point to `box2` and print the new address.

### Exercise 3.2: Nulling a Pointer 🚫  
Create a pointer to a dynamically allocated `DetectedObject`. After you are finished with it, use `delete` and then set the pointer to `nullptr`. Attempt to dereference the pointer afterwards to see the potential error (or how the program handles it).

### Exercise 3.3: Pointer Arithmetic on an Array ➕  
Using the array of `DetectedObject` pointers from Exercise 1.3, create a new pointer and initialize it to the beginning of the array. Use pointer arithmetic (e.g., `ptr++`) to move through the array and print each object's label.

### Exercise 3.4: Function to Swap Pointers 🤝  
Write a function `swapPointers(DetectedObject*& ptr1, DetectedObject*& ptr2)` that takes two pointers by reference and swaps their values (i.e., makes `ptr1` point to what `ptr2` was pointing to, and vice-versa). Demonstrate this with two `DetectedObject` instances.

### Exercise 3.5: Returning a Pointer from a Function 🎁  
Write a function `findLargestObject(std::vector<DetectedObject>& objects)` that iterates through a vector of `DetectedObjects` and returns a pointer to the object with the largest area (`width * height`). Create a vector, populate it, and call the function to get and print the largest object's info.

---

## 🛠️ How to Compile & Run

Each exercise is written as a **separate `.cpp` file**.

Compile and run an example:

```bash
# Compile
g++ -std=c++11 "Exercise 1.1 Bounding Box Pointer.cpp" -o ex1_1

# Run
./ex1_1
