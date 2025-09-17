#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct DetectedObject {
    std::string label;
    double confidence_score;
};

int main() {
    std::vector<DetectedObject> detections = {{"car", 0.95}, {"pedestrian", 0.45}, {"bus", 0.88}};
    std::replace_if(detections.begin(), detections.end(),
        [](const DetectedObject& obj) {
            return obj.confidence_score < 0.5;
        }, {"unverified", 0.0});
    std::cout << "After replacement:" << std::endl;
    for (const auto& obj : detections) {
        std::cout << obj.label << " (" << obj.confidence_score << ")" << std::endl;
    }
    return 0;
}