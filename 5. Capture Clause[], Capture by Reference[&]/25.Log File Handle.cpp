#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct DetectedObject {
    std::string object_class;
    float confidence;
};

int main() {
    std::ofstream log_file("detections.log");
    if (!log_file.is_open()) {
        std::cerr << "Error opening log file!" << std::endl;
        return 1;
    }
    
    std::vector<DetectedObject> detections = {
        {"car", 0.95f}, {"person", 0.88f}
    };

    auto log_to_file = [&](const DetectedObject& obj) {
        log_file << "Detected: " << obj.object_class << " with confidence " << obj.confidence << std::endl;
    };

    for (const auto& obj : detections) {
        log_to_file(obj);
    }
    
    log_file.close();
    std::cout << "Detections logged to detections.log" << std::endl;
    return 0;
}