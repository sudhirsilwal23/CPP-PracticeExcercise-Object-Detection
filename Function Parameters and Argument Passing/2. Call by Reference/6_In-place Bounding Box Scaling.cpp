// Question: Write a function `scaleBoundingBox` that takes a `BoundingBox` object by reference. The function should multiply the width and 
// height of the box by a given `scaleFactor`. This modification should directly affect the original object.


#include <iostream>

// A structure to represent a rectangular bounding box.
struct BoundingBox {
    int x, y, width, height;
};

// This function scales the dimensions of a BoundingBox.
// It takes the object by reference, so it modifies the original object directly.
void scaleBoundingBox(BoundingBox& box, double scaleFactor) {
    // The function modifies the original object's width and height.
    box.width *= scaleFactor;
    box.height *= scaleFactor;
}

int main() {
    // Create an instance of the BoundingBox struct.
    BoundingBox myBox = {10, 20, 30, 40};

    // Print the original dimensions.
    std::cout << "Original box dimensions: " << myBox.width << "x" << myBox.height << std::endl;

    // Call the function, passing the object by reference.
    scaleBoundingBox(myBox, 1.5);

    // Print the dimensions again, showing they have been modified.
    std::cout << "Scaled box dimensions: " << myBox.width << "x" << myBox.height << std::endl;

    return 0;
}