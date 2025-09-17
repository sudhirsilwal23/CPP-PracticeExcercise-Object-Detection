/* Question: Write a function `calculateArea` that takes a `BoundingBox` object by value and returns its area. 
             The `BoundingBox` struct should contain `x, y, width, and height` members. 
             The function should not modify the original object. */

#include <iostream>

// A structure to represent a rectangular bounding box.
struct BoundingBox {
    int x, y, width, height;
};

// This function calculates the area of a BoundingBox.
// It takes the object by value, meaning it works on a copy and doesn't affect the original.
int calculateArea(BoundingBox box) {
    // The function multiplies the width and height to get the area.
    return box.width * box.height;
}

int main() {
    // Create an instance of the BoundingBox struct.
    BoundingBox myBox = {10, 20, 30, 40};

    // Call the function and print the returned area.
    std::cout << "Original area: " << calculateArea(myBox) << std::endl;

    return 0;
}