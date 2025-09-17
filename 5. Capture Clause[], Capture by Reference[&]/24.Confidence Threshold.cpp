#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

struct DetectedObject {
    float confidence;
};

int main() {
    std::vector<DetectedObject> detections = {
        {0.9f}, {0.6f}, {0.8f}, {0.4f}
    };
    float min_confidence = 0.7f;
    
    auto filter_by_confidence = [&](const DetectedObject& obj) {
        return obj.confidence >= min_confidence;
    };

    std::vector<DetectedObject> filtered_list;
    std::copy_if(detections.begin(), detections.end(), std::back_inserter(filtered_list), filter_by_confidence);
    
    std::cout << "Filtered detections (confidence >= " << min_confidence << "):" << std::endl;
    for(const auto& obj : filtered_list) {
        std::cout << obj.confidence << std::endl;
    }
    return 0;
}