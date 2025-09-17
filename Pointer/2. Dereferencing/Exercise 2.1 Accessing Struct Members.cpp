#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

int main() {
    BoundingBox box = {10, 20, 50, 80};
    BoundingBox* ptr_box = &box;

    std::cout << "Using * operator:" << std::endl;
    std::cout << "  x: " << (*ptr_box).x << std::endl;
    std::cout << "  y: " << (*ptr_box).y << std::endl;

    std::cout << "Using -> operator:" << std::endl;
    std::cout << "  width: " << ptr_box->width << std::endl;
    std::cout << "  height: " << ptr_box->height << std::endl;
    return 0;
}