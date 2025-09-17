#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

void scaleBoundingBox(BoundingBox& box, double scaleFactor) {
    box.width *= scaleFactor;
    box.height *= scaleFactor;
}

int main() {
    BoundingBox myBox = {10, 20, 30, 40};
    std::cout << "Original box dimensions: " << myBox.width << "x" << myBox.height << std::endl;
    scaleBoundingBox(myBox, 1.5);
    std::cout << "Scaled box dimensions: " << myBox.width << "x" << myBox.height << std::endl;
    return 0;
}