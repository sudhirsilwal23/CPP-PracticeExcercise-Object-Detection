#include <iostream>
#include <vector>
#include <numeric>

struct BoundingBox {
    double x, y, width, height;
};

double calculateArea(const BoundingBox& box) {
    return box.width * box.height;
}

void processBoundingBoxes(const std::vector<BoundingBox>& boxes) {
    double totalArea = 0.0;
    std::cout << "Individual Bounding Box Areas:" << std::endl;
    for (const auto& box : boxes) {
        double area = calculateArea(box);
        std::cout << " - Area: " << area << std::endl;
        totalArea += area;
    }
    std::cout << "\nTotal Area of all Bounding Boxes: " << totalArea << std::endl;
}

int main() {
    std::vector<BoundingBox> detections = {
        {10.0, 20.0, 50.0, 40.0},
        {100.0, 150.0, 30.0, 60.0},
        {250.0, 250.0, 75.0, 75.0}
    };
    processBoundingBoxes(detections);
    return 0;
}