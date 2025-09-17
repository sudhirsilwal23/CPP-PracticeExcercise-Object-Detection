#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct DetectedObject {
    std::string object_class;
    float confidence;
};

std::vector<DetectedObject> filter_detections(const std::vector<DetectedObject>& detections, 
                                            std::function<bool(const DetectedObject&)> filter_criteria) {
    std::vector<DetectedObject> filtered_list;
    std::copy_if(detections.begin(), detections.end(), std::back_inserter(filtered_list), filter_criteria);
    return filtered_list;
}

int main() {
    std::vector<DetectedObject> detections = {
        {"car", 0.95f}, {"person", 0.60f}, {"car", 0.88f}, {"bus", 0.45f}
    };

    auto filtered_cars = filter_detections(detections, [](const DetectedObject& obj) {
        return obj.object_class == "car";
    });

    std::cout << "Filtered Cars:" << std::endl;
    for (const auto& obj : filtered_cars) {
        std::cout << "Class: " << obj.object_class << ", Confidence: " << obj.confidence << std::endl;
    }
    return 0;
}