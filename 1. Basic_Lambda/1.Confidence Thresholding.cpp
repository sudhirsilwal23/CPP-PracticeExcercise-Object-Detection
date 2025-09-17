#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    int id;
    float confidence;
};

int main() {
    std::vector<DetectedObject> detections = {
        {1, 0.95f}, {2, 0.60f}, {3, 0.88f}, {4, 0.45f}, {5, 0.72f}
    };
    float threshold = 0.7f;
    int high_confidence_count = 0;
    
    std::for_each(detections.begin(), detections.end(), [&](const DetectedObject& obj) {
        if (obj.confidence > threshold) {
            high_confidence_count++;
        }
    });

    std::cout << "Number of high-confidence detections: " << high_confidence_count << std::endl;
    return 0;
}