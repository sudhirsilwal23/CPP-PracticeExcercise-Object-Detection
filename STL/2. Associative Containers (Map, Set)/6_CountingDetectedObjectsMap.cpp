#include <iostream>
#include <vector>
#include <map>
#include <string>

struct DetectedObject {
    std::string label;
};

void countObjectTypes(const std::vector<DetectedObject>& detections) {
    std::map<std::string, int> objectCounts;
    for (const auto& obj : detections) {
        objectCounts[obj.label]++;
    }
    std::cout << "Object Type Counts:" << std::endl;
    for (const auto& pair : objectCounts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    std::vector<DetectedObject> detections = {
        {"car"}, {"pedestrian"}, {"car"}, {"bus"}, {"pedestrian"}, {"car"}
    };
    countObjectTypes(detections);
    return 0;
}