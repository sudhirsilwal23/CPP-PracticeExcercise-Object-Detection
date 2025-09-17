#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    double confidence_score;
};

int main() {
    std::vector<DetectedObject> allDetections = {{0.45}, {0.85}, {0.30}, {0.92}, {0.71}};
    std::vector<DetectedObject> validDetections;
    std::copy_if(allDetections.begin(), allDetections.end(), std::back_inserter(validDetections),
        [](const DetectedObject& obj) {
            return obj.confidence_score >= 0.5;
        });
    std::cout << "Valid Detections (confidence >= 0.5): " << validDetections.size() << std::endl;
    return 0;
}