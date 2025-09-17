#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    double width, height;
};

int main() {
    std::vector<BoundingBox> boxes = {{10, 10}, {50, 50}, {5, 5}, {30, 20}};
    double areaThreshold = 100.0;
    int smallBoxCount = std::count_if(boxes.begin(), boxes.end(),
        [areaThreshold](const BoundingBox& box) {
            return (box.width * box.height) < areaThreshold;
        });
    std::cout << "Number of small bounding boxes (area < " << areaThreshold << "): " << smallBoxCount << std::endl;
    return 0;
}