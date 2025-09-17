# 🖥️ C++ Pointer Exercises in Object Detection

This folder contains a set of **C++ exercises** designed to strengthen understanding of **pointers** in the context of **image object detection**.  

The exercises are organized into sections: 

1. **Creating Pointers**  
2. **Dereferencing Pointers**  
3. **Modifying Pointer Values**

---

## 📝 Topics & Exercises

## 1. Creating Pointers

These exercises focus on initializing and using pointers to manage object data.

- **Exercise 1.1: Bounding Box Pointer 📦**  
  Create a `BoundingBox` struct, instantiate it, and use a pointer to print its address.

- **Exercise 1.2: Class for Detected Objects 🤖**  
  Create a `DetectedObject` class with a label and bounding box. Dynamically allocate it on the heap using `new`.

- **Exercise 1.3: Array of Pointers 📝**  
  Create an array of pointers to multiple `DetectedObject` instances.

- **Exercise 1.4: Pointer to a Pointer 🕸️**  
  Demonstrate using a pointer to a pointer to access object memory.

- **Exercise 1.5: Function with a Pointer Argument ⚙️**  
  Pass a pointer to a function `processObject()` and print its label.

---

## 2. Dereferencing Pointers

These exercises practice accessing the data that a pointer points to.

- **Exercise 2.1: Accessing Struct Members 🖼️**  
  Use both `*` and `->` operators to access bounding box values.

- **Exercise 2.2: Calling a Class Method 🗣️**  
  Add a method `printInfo()` to `DetectedObject` and call it via pointer.

- **Exercise 2.3: Iterating Through an Array of Pointers 🗂️**  
  Use a loop to print labels of all dynamically allocated objects in an array.

- **Exercise 2.4: Dereferencing a Pointer to a Pointer ⛓️**  
  Use `**` and `->` operators to print a label using only a double pointer.

- **Exercise 2.5: Function with Dereferencing ➡️**  
  Modify `processObject()` to print both label and bounding box width.

---

## 3. Modify the Pointer Value

These exercises cover reassigning, nulling, and swapping pointers.

- **Exercise 3.1: Reassigning a Pointer 🔄**  
  Reassign a pointer to point to a different `BoundingBox`.

- **Exercise 3.2: Nulling a Pointer 🚫**  
  Set a pointer to `nullptr` after deleting it to avoid dangling references.

- **Exercise 3.3: Pointer Arithmetic on an Array ➕**  
  Use pointer arithmetic to move through an array of object pointers.

- **Exercise 3.4: Function to Swap Pointers 🤝**  
  Swap two pointers by reference using a function `swapPointers()`.

- **Exercise 3.5: Returning a Pointer from a Function 🎁**  
  Write a function to find and return the pointer to the object with the largest bounding box area.

---

## 🛠️ How to Compile & Run

Each exercise is written as a **separate `.cpp` file**.

Compile and run an example:

```bash
g++ -std=c++11 "Exercise 1.1 Bounding Box Pointer.cpp" -o ex1_1
./ex1_1
