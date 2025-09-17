#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct DetectedObject {
    std::string label;
    int id;
};

int main() {
    std::vector<DetectedObject> detections = {
        {"car", 101}, {"pedestrian", 201}, {"car", 102}, {"bus", 301}, {"pedestrian", 202}
    };
    std::sort(detections.begin(), detections.end(),
        [](const DetectedObject& a, const DetectedObject& b) {
            return a.label < b.label;
        });
    std::cout << "Grouped Detections:" << std::endl;
    if (!detections.empty()) {
        std::string currentLabel = detections[0].label;
        std::cout << "--- " << currentLabel << " ---" << std::endl;
        for (const auto& obj : detections) {
            if (obj.label != currentLabel) {
                currentLabel = obj.label;
                std::cout << "--- " << currentLabel << " ---" << std::endl;
            }
            std::cout << "  - ID " << obj.id << std::endl;
        }
    }
    return 0;
}