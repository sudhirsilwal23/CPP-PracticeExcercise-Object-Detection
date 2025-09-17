#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    int id;
    std::string object_class;
    float confidence;
};

int main() {
    std::vector<DetectedObject> detections = {
        {1, "car", 0.95f}, {2, "person", 0.60f}, {3, "car", 0.88f}
    };
    
    std::for_each(detections.begin(), detections.end(), [](const DetectedObject& obj) {
        std::cout << "ID: " << obj.id << ", Class: " << obj.object_class 
                  << ", Confidence: " << obj.confidence << std::endl;
    });
    return 0;
}