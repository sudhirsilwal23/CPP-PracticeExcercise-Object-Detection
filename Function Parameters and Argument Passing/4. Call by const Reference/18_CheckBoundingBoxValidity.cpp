#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

bool isValidBox(const BoundingBox& box) {
    return box.width > 0 && box.height > 0;
}

int main() {
    BoundingBox validBox = {10, 20, 30, 40};
    BoundingBox invalidBox = {10, 20, 0, 40};
    std::cout << "Valid box is valid? " << std::boolalpha << isValidBox(validBox) << std::endl;
    std::cout << "Invalid box is valid? " << std::boolalpha << isValidBox(invalidBox) << std::endl;
    return 0;
}