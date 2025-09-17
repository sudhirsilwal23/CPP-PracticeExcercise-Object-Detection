#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct DetectedObject {
    float confidence;
    std::string object_class;
};

void sort_detections(std::vector<DetectedObject>& detections, 
                     std::function<bool(const DetectedObject&, const DetectedObject&)> comparator) {
    std::sort(detections.begin(), detections.end(), comparator);
}

int main() {
    std::vector<DetectedObject> detections = {
        {0.88f, "car"}, {0.95f, "person"}, {0.60f, "bicycle"}
    };
    
    sort_detections(detections, [](const DetectedObject& a, const DetectedObject& b) {
        return a.confidence > b.confidence; // Sort by confidence descending
    });

    for (const auto& obj : detections) {
        std::cout << "Confidence: " << obj.confidence << ", Class: " << obj.object_class << std::endl;
    }
    return 0;
}