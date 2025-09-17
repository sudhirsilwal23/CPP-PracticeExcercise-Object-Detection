#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct DetectedObject {
    std::string label;
    double confidence_score;
};

int main() {
    std::vector<DetectedObject> detections = {{"car", 0.95}, {"pedestrian", 0.88}, {"bus", 0.99}};
    std::sort(detections.begin(), detections.end(),
        [](const DetectedObject& a, const DetectedObject& b) {
            return a.confidence_score > b.confidence_score;
        });
    std::cout << "Sorted by confidence score (descending):" << std::endl;
    for (const auto& obj : detections) {
        std::cout << obj.label << " (" << obj.confidence_score << ")" << std::endl;
    }
    return 0;
}