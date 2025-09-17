#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    float x1, y1, x2, y2;
};

int main() {
    std::vector<BoundingBox> boxes = {{10, 10, 50, 50}, {100, 100, 200, 200}};
    float scale_factor = 1.5f;

    std::for_each(boxes.begin(), boxes.end(), [scale_factor](BoundingBox& box) {
        box.x1 *= scale_factor;
        box.y1 *= scale_factor;
        box.x2 *= scale_factor;
        box.y2 *= scale_factor;
    });

    std::cout << "Scaled bounding box coordinates:" << std::endl;
    for (const auto& box : boxes) {
        std::cout << "x1: " << box.x1 << ", y1: " << box.y1 
                  << ", x2: " << box.x2 << ", y2: " << box.y2 << std::endl;
    }
    return 0;
}