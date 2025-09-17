#include <iostream>
#include <vector>
#include <numeric>

struct BoundingBox {
    double width, height;
};

int main() {
    std::vector<BoundingBox> boxes = {{10, 20}, {50, 50}, {30, 60}};
    double totalArea = std::accumulate(boxes.begin(), boxes.end(), 0.0,
        [](double sum, const BoundingBox& box) {
            return sum + (box.width * box.height);
        });
    double averageArea = totalArea / boxes.size();
    std::cout << "Average Bounding Box Area: " << averageArea << std::endl;
    return 0;
}