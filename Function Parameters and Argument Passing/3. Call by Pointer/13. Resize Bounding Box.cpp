#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

void resizeBoundingBoxPtr(BoundingBox* boxPtr, int newWidth, int newHeight) {
    if (boxPtr) {
        boxPtr->width = newWidth;
        boxPtr->height = newHeight;
    }
}

int main() {
    BoundingBox myBox = {10, 20, 30, 40};
    std::cout << "Original dimensions: " << myBox.width << "x" << myBox.height << std::endl;
    resizeBoundingBoxPtr(&myBox, 50, 60);
    std::cout << "New dimensions: " << myBox.width << "x" << myBox.height << std::endl;
    return 0;
}