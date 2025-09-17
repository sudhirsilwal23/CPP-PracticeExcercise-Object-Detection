#include <iostream>
#include <vector>
#include <random>

struct BoundingBox {
    int id;
};

int main() {
    std::vector<BoundingBox> detections;
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<> distrib(1, 5);
    int nextId = 1;
    for (int frame = 1; frame <= 3; ++frame) {
        int newDetectionsCount = distrib(gen);
        std::cout << "--- Frame " << frame << " ---" << std::endl;
        std::cout << "Before adding detections: Size = " << detections.size() << ", Capacity = " << detections.capacity() << std::endl;
        for (int i = 0; i < newDetectionsCount; ++i) {
            detections.push_back({nextId++});
        }
        std::cout << "After adding " << newDetectionsCount << " detections: Size = " << detections.size() << ", Capacity = " << detections.capacity() << std::endl;
    }
    return 0;
}