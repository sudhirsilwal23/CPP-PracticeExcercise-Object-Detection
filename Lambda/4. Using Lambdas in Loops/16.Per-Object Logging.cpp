#include <iostream>
#include <vector>
#include <string>

struct DetectedObject {
    int id;
    std::string object_class;
    float confidence;
};

int main() {
    std::vector<DetectedObject> detections = {
        {1, "car", 0.95f}, {2, "person", 0.60f}
    };

    for (const auto& obj : detections) {
        auto log_details = [](const DetectedObject& det) {
            std::cout << "Log: Object ID " << det.id << " (" << det.object_class 
                      << ") with confidence " << det.confidence << std::endl;
        };
        log_details(obj);
    }
    return 0;
}