#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    float confidence;
};

int main() {
    std::vector<DetectedObject> detections = {
        {95.0f}, {60.0f}, {88.0f}
    };
    
    std::for_each(detections.begin(), detections.end(), [](DetectedObject& obj) {
        obj.confidence = obj.confidence / 100.0f;
    });

    std::cout << "Normalized confidences:" << std::endl;
    for (const auto& obj : detections) {
        std::cout << obj.confidence << std::endl;
    }
    return 0;
}