#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct DetectedObject {
    std::string label;
};

int main() {
    std::vector<DetectedObject> detections = {{"car"}, {"pedestrian"}, {"bus"}, {"pedestrian"}};
    int pedestrianCount = std::count_if(detections.begin(), detections.end(),
        [](const DetectedObject& obj) {
            return obj.label == "pedestrian";
        });
    std::cout << "Number of pedestrians detected: " << pedestrianCount << std::endl;
    return 0;
}