#include <iostream>
#include <vector>
#include <numeric>

struct DetectedObject {
    float confidence;
};

int main() {
    std::vector<DetectedObject> detections = {
        {0.95f}, {0.60f}, {0.88f}, {0.45f}, {0.72f}
    };
    
    double total_confidence = std::accumulate(detections.begin(), detections.end(), 0.0,
        [](double sum, const DetectedObject& obj) {
            return sum + obj.confidence;
        });
    
    double average_confidence = total_confidence / detections.size();
    std::cout << "Average confidence of all detections: " << average_confidence << std::endl;
    return 0;
}