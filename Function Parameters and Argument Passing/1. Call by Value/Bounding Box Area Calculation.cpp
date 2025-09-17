#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

int calculateArea(BoundingBox box) {
    return box.width * box.height;
}

int main() {
    BoundingBox myBox = {10, 20, 30, 40};
    std::cout << "Original area: " << calculateArea(myBox) << std::endl;
    return 0;
}