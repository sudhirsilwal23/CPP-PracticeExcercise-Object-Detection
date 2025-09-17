#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

bool areBoxesEqual(const BoundingBox& box1, const BoundingBox& box2) {
    return box1.x == box2.x && box1.y == box2.y && box1.width == box2.width && box1.height == box2.height;
}

int main() {
    BoundingBox boxA = {10, 20, 30, 40};
    BoundingBox boxB = {10, 20, 30, 40};
    BoundingBox boxC = {10, 20, 30, 50};
    std::cout << "Box A and B are equal? " << std::boolalpha << areBoxesEqual(boxA, boxB) << std::endl;
    std::cout << "Box A and C are equal? " << std::boolalpha << areBoxesEqual(boxA, boxC) << std::endl;
    return 0;
}