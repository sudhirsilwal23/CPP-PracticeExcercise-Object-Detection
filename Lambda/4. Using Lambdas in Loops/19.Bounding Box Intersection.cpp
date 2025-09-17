#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    int id;
    int x1, y1, x2, y2;
};

int main() {
    std::vector<BoundingBox> detections = {
        {1, 10, 10, 50, 50},
        {2, 30, 30, 70, 70},
        {3, 100, 100, 150, 150}
    };
    
    for (size_t i = 0; i < detections.size(); ++i) {
        for (size_t j = i + 1; j < detections.size(); ++j) {
            auto check_intersection = [&](const BoundingBox& b1, const BoundingBox& b2) {
                bool overlap = !(b1.x2 < b2.x1 || b1.x1 > b2.x2 || b1.y2 < b2.y1 || b1.y1 > b2.y2);
                if (overlap) {
                    std::cout << "Boxes " << b1.id << " and " << b2.id << " intersect." << std::endl;
                }
            };
            check_intersection(detections[i], detections[j]);
        }
    }
    return 0;
}