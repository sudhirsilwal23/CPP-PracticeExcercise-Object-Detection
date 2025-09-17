#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    float confidence;
};

// Reusable regular function for sorting
bool compare_by_confidence(const DetectedObject& a, const DetectedObject& b) {
    return a.confidence > b.confidence;
}

int main() {
    std::vector<DetectedObject> detections = {{0.9f}, {0.6f}, {0.8f}};
    
    // Sorting using the named function
    std::sort(detections.begin(), detections.end(), compare_by_confidence);
    std::cout << "Sorted by named function: ";
    for (const auto& obj : detections) std::cout << obj.confidence << " ";
    std::cout << std::endl;

    // Sorting using an equivalent lambda
    std::sort(detections.begin(), detections.end(), [](const DetectedObject& a, const DetectedObject& b) {
        return a.confidence < b.confidence; // Sort ascending this time
    });
    std::cout << "Sorted by lambda: ";
    for (const auto& obj : detections) std::cout << obj.confidence << " ";
    std::cout << std::endl;
    return 0;
}