#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

int main() {
    BoundingBox box1 = {10, 20, 50, 80};
    BoundingBox box2 = {100, 150, 200, 100};
    BoundingBox* ptr_box = &box1;

    std::cout << "Initially, ptr_box points to address: " << ptr_box << std::endl;
    std::cout << "Initial box values: (" << ptr_box->x << ", " << ptr_box->y << ")" << std::endl;

    ptr_box = &box2;
    std::cout << "After reassignment, ptr_box points to address: " << ptr_box << std::endl;
    std::cout << "New box values: (" << ptr_box->x << ", " << ptr_box->y << ")" << std::endl;
    return 0;
}