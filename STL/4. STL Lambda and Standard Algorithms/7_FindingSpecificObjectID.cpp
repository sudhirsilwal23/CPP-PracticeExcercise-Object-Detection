#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    int id;
};

int main() {
    std::vector<BoundingBox> boxes = {{101}, {102}, {103}, {104}};
    int targetId = 103;
    auto it = std::find_if(boxes.begin(), boxes.end(),
        [targetId](const BoundingBox& box) {
            return box.id == targetId;
        });
    if (it != boxes.end()) {
        std::cout << "Found bounding box with ID " << it->id << std::endl;
    } else {
        std::cout << "Bounding box with ID " << targetId << " not found." << std::endl;
    }
    return 0;
}