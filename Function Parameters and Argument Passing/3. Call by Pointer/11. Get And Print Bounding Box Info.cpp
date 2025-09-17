#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

void printBoxInfo(const BoundingBox* boxPtr) {
    if (boxPtr) {
        std::cout << "Box Info: (" << boxPtr->x << ", " << boxPtr->y << ") " 
                  << boxPtr->width << "x" << boxPtr->height << std::endl;
    } else {
        std::cout << "Error: Null pointer provided." << std::endl;
    }
}

int main() {
    BoundingBox myBox = {10, 20, 30, 40};
    printBoxInfo(&myBox);
    printBoxInfo(nullptr);
    return 0;
}