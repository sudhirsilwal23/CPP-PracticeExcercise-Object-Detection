#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    double width, height;
};

int main() {
    std::vector<BoundingBox> boxes = {{10, 20}, {50, 50}, {5, 5}, {30, 60}};
    auto minIt = std::min_element(boxes.begin(), boxes.end(),
        [](const BoundingBox& a, const BoundingBox& b) {
            return (a.width * a.height) < (b.width * b.height);
        });
    std::cout << "Smallest bounding box area: " << (minIt->width * minIt->height) << std::endl;
    return 0;
}