#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    double x, y, width, height;
};

int main() {
    std::vector<BoundingBox> boxes = {{10, 20, 50, 40}, {0, 0, 0, 0}, {100, 150, 30, 60}};
    BoundingBox defaultBox = {0, 0, 10, 10};
    std::replace_if(boxes.begin(), boxes.end(),
        [](const BoundingBox& box) {
            return (box.width * box.height) == 0;
        }, defaultBox);
    std::cout << "After replacing zero-area boxes:" << std::endl;
    for (const auto& box : boxes) {
        std::cout << "Box: (" << box.x << ", " << box.y << ") - Area: " << (box.width * box.height) << std::endl;
    }
    return 0;
}