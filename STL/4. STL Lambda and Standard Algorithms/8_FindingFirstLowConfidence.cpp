#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    double confidence_score;
};

int main() {
    std::vector<DetectedObject> detections = {{0.95}, {0.88}, {0.42}, {0.91}};
    double threshold = 0.5;
    auto it = std::find_if(detections.begin(), detections.end(),
        [threshold](const DetectedObject& obj) {
            return obj.confidence_score < threshold;
        });
    if (it != detections.end()) {
        std::cout << "Found first low-confidence detection with score: " << it->confidence_score << std::endl;
    } else {
        std::cout << "No low-confidence detections found." << std::endl;
    }
    return 0;
}