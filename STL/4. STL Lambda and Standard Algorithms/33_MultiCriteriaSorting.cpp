#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct DetectedObject {
    std::string label;
    double confidence_score;
};

int main() {
    std::vector<DetectedObject> detections = {
        {"car", 0.85}, {"pedestrian", 0.95}, {"car", 0.92}, {"bus", 0.77}, {"pedestrian", 0.88}
    };
    std::sort(detections.begin(), detections.end(),
        [](const DetectedObject& a, const DetectedObject& b) {
            if (a.label != b.label) return a.label < b.label;
            return a.confidence_score > b.confidence_score;
        });
    std::cout << "Sorted by label then confidence:" << std::endl;
    for (const auto& obj : detections) {
        std::cout << obj.label << " (" << obj.confidence_score << ")" << std::endl;
    }
    return 0;
}