#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

struct DetectedObject {
    int id;
    std::string object_class;
};

void apply_to_detections(std::vector<DetectedObject>& detections, 
                         std::function<void(DetectedObject&)> action) {
    std::for_each(detections.begin(), detections.end(), action);
}

int main() {
    std::vector<DetectedObject> detections = {
        {1, "car"}, {2, "person"}
    };
    
    apply_to_detections(detections, [](DetectedObject& obj) {
        std::cout << "Processing object ID: " << obj.id << ", Class: " << obj.object_class << std::endl;
    });
    return 0;
}