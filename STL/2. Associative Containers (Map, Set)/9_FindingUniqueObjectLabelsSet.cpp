#include <iostream>
#include <vector>
#include <string>
#include <set>

struct DetectedObject {
    std::string label;
};

void findUniqueLabels(const std::vector<DetectedObject>& detections) {
    std::set<std::string> uniqueLabels;
    for (const auto& obj : detections) {
        uniqueLabels.insert(obj.label);
    }
    std::cout << "Unique Object Labels:" << std::endl;
    for (const auto& label : uniqueLabels) {
        std::cout << "- " << label << std::endl;
    }
}

int main() {
    std::vector<DetectedObject> detections = {
        {"car"}, {"pedestrian"}, {"car"}, {"bus"}, {"pedestrian"}, {"truck"}
    };
    findUniqueLabels(detections);
    return 0;
}