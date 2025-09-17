#include <iostream>
#include <algorithm>

struct BoundingBox {
    int x, y, width, height;
};

void swapBoxes(BoundingBox* box1, BoundingBox* box2) {
    if (box1 && box2) {
        std::swap(*box1, *box2);
    }
}

int main() {
    BoundingBox boxA = {10, 10, 20, 20};
    BoundingBox boxB = {50, 50, 60, 60};
    std::cout << "Before swap - Box A width: " << boxA.width << ", Box B width: " << boxB.width << std::endl;
    swapBoxes(&boxA, &boxB);
    std::cout << "After swap - Box A width: " << boxA.width << ", Box B width: " << boxB.width << std::endl;
    return 0;
}