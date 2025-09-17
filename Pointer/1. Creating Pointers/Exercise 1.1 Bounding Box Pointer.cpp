#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

int main() {
    BoundingBox box = {10, 20, 50, 80};
    BoundingBox* ptr_box = &box;
    std::cout << "Address of BoundingBox: " << ptr_box << std::endl;
    return 0;
}