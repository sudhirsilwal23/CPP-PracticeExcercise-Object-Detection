#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    double confidence_score;
};

int main() {
    std::vector<DetectedObject> detections = {{0.95}, {0.82}, {0.98}, {0.77}};
    auto maxIt = std::max_element(detections.begin(), detections.end(),
        [](const DetectedObject& a, const DetectedObject& b) {
            return a.confidence_score < b.confidence_score;
        });
    std::cout << "Highest confidence score: " << maxIt->confidence_score << std::endl;
    return 0;
}