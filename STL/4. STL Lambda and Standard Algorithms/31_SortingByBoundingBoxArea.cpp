#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    double width, height;
};

int main() {
    std::vector<BoundingBox> boxes = {{10, 20}, {5, 5}, {30, 60}};
    std::sort(boxes.begin(), boxes.end(),
        [](const BoundingBox& a, const BoundingBox& b) {
            return (a.width * a.height) < (b.width * b.height);
        });
    std::cout << "Sorted by area (ascending):" << std::endl;
    for (const auto& box : boxes) {
        std::cout << "Area: " << (box.width * box.height) << std::endl;
    }
    return 0;
}