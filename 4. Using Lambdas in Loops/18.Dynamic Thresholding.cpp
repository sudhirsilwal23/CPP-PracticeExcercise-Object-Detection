#include <iostream>
#include <vector>
#include <string>

struct DetectedObject {
    std::string object_class;
    float confidence;
};

int main() {
    std::vector<DetectedObject> detections = {
        {"person", 0.9f}, {"car", 0.85f}, {"person", 0.6f}, {"car", 0.7f}
    };

    for (const auto& obj : detections) {
        auto check_confidence = [&]() {
            if (obj.object_class == "person" && obj.confidence > 0.8) {
                std::cout << "High confidence person detected." << std::endl;
            } else if (obj.object_class == "car" && obj.confidence > 0.75) {
                std::cout << "High confidence car detected." << std::endl;
            } else {
                std::cout << "Object detected, but confidence is too low." << std::endl;
            }
        };
        check_confidence();
    }
    return 0;
}