#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    float x1, y1, x2, y2;
};

int main() {
    BoundingBox box1 = {50, 50, 150, 150};
    BoundingBox box2 = {100, 100, 200, 200};

    auto calculate_iou = [](const BoundingBox& b1, const BoundingBox& b2) {
        float intersection_x1 = std::max(b1.x1, b2.x1);
        float intersection_y1 = std::max(b1.y1, b2.y1);
        float intersection_x2 = std::min(b1.x2, b2.x2);
        float intersection_y2 = std::min(b1.y2, b2.y2);
        
        float intersection_area = std::max(0.0f, intersection_x2 - intersection_x1) * std::max(0.0f, intersection_y2 - intersection_y1);

        float area1 = (b1.x2 - b1.x1) * (b1.y2 - b1.y1);
        float area2 = (b2.x2 - b2.x1) * (b2.y2 - b2.y1);
        float union_area = area1 + area2 - intersection_area;
        
        return intersection_area / union_area;
    };

    std::cout << "IOU between the two boxes: " << calculate_iou(box1, box2) << std::endl;
    return 0;
}