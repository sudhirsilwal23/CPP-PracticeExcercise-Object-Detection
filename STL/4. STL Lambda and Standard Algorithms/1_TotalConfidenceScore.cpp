#include <iostream>
#include <vector>
#include <numeric>

struct DetectedObject {
    double confidence_score;
};

int main() {
    std::vector<DetectedObject> detections = {{0.95}, {0.82}, {0.77}, {0.91}};
    double totalConfidence = std::accumulate(detections.begin(), detections.end(), 0.0,
        [](double sum, const DetectedObject& obj) {
            return sum + obj.confidence_score;
        });
    std::cout << "Total Confidence Score: " << totalConfidence << std::endl;
    return 0;
}