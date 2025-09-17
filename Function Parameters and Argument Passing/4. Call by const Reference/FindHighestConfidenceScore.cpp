#include <iostream>
#include <vector>
#include <algorithm>

struct Detection {
    double confidence;
};

double findHighestConfidence(const std::vector<Detection>& detections) {
    double highest = 0.0;
    for (const auto& det : detections) {
        if (det.confidence > highest) {
            highest = det.confidence;
        }
    }
    return highest;
}

int main() {
    std::vector<Detection> dets = {{0.8}, {0.9}, {0.75}};
    std::cout << "Highest confidence: " << findHighestConfidence(dets) << std::endl;
    return 0;
}