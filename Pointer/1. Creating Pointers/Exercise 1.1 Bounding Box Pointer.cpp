#include <iostream>

// Exercise 1.1: Bounding Box Pointer 📦
// This exercise demonstrates the creation of a pointer.
// A struct named `BoundingBox` is defined to represent an object's location and size.
// An instance of `BoundingBox` is created, and a pointer `ptr_box` is then initialized
// to hold the memory address of this instance using the address-of operator (`&`).
// The program then prints the memory address stored in the pointer,
// showing that the pointer has been successfully created and points to the object.

struct BoundingBox {
    int x, y, width, height;
};

int main() {
    // 1. Create a `BoundingBox` object.
    BoundingBox box = {10, 20, 50, 80};

    // 2. Create a pointer to the `BoundingBox` object.
    // The `&` operator gets the memory address of the `box` variable.
    BoundingBox* ptr_box = &box;

    // 3. Print the address stored in the pointer.
    std::cout << "Address of BoundingBox: " << ptr_box << std::endl;

    return 0;
}