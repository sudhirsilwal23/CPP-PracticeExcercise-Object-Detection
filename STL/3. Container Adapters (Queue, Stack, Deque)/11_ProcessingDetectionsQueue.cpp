#include <iostream>
#include <queue>
#include <string>

struct BoundingBox {
    int id;
    std::string label;
};

void processDetections(std::queue<BoundingBox>& detectionQueue) {
    while (!detectionQueue.empty()) {
        BoundingBox currentBox = detectionQueue.front();
        detectionQueue.pop();
        std::cout << "Processing detection ID: " << currentBox.id << " (Label: " << currentBox.label << ")" << std::endl;
    }
    std::cout << "Queue is now empty." << std::endl;
}

int main() {
    std::queue<BoundingBox> incomingDetections;
    incomingDetections.push({1, "car"});
    incomingDetections.push({2, "pedestrian"});
    incomingDetections.push({3, "truck"});
    processDetections(incomingDetections);
    return 0;
}