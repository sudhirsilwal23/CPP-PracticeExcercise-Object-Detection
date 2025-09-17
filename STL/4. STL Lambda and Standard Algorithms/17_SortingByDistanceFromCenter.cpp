#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct BoundingBox {
    double x, y, width, height;
};

int main() {
    std::vector<BoundingBox> boxes = {{10, 20, 50, 40}, {250, 250, 30, 30}, {100, 100, 20, 20}};
    const double centerX = 320.0, centerY = 240.0;
    std::sort(boxes.begin(), boxes.end(),
        [centerX, centerY](const BoundingBox& a, const BoundingBox& b) {
            double distA = std::sqrt(std::pow(a.x - centerX, 2) + std::pow(a.y - centerY, 2));
            double distB = std::sqrt(std::pow(b.x - centerX, 2) + std::pow(b.y - centerY, 2));
            return distA < distB;
        });
    std::cout << "Sorted by distance from center:" << std::endl;
    for (const auto& box : boxes) {
        std::cout << "Box at (" << box.x << ", " << box.y << ")" << std::endl;
    }
    return 0;
}