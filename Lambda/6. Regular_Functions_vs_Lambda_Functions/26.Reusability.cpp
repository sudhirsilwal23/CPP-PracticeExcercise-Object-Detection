#include <iostream>
#include <vector>
#include <numeric>

struct BoundingBox {
    int x, y, width, height;
};

// Reusable regular function
int calculate_area(const BoundingBox& bbox) {
    return bbox.width * bbox.height;
}

int main() {
    std::vector<BoundingBox> detections = {{10, 10, 50, 50}, {100, 100, 30, 30}};

    // Using the reusable regular function
    std::cout << "Area of first box (regular function): " << calculate_area(detections[0]) << std::endl;

    // Using a one-off lambda for a specific calculation
    auto calculate_area_lambda = [](const BoundingBox& bbox) {
        return bbox.width * bbox.height;
    };
    int total_area = std::accumulate(detections.begin(), detections.end(), 0, 
                                      [&](int sum, const BoundingBox& b) { return sum + calculate_area_lambda(b); });
    
    std::cout << "Total area of all boxes (lambda): " << total_area << std::endl;
    return 0;
}