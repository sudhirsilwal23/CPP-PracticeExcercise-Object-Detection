#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct DetectedObject {
    std::string label;
};

int main() {
    std::vector<DetectedObject> detections = {{"car"}, {"pedestrian"}, {"truck"}};
    std::cout << "Original order: ";
    for (const auto& obj : detections) std::cout << obj.label << " ";
    std::cout << std::endl;

    std::reverse(detections.begin(), detections.end());

    std::cout << "Reversed order: ";
    for (const auto& obj : detections) std::cout << obj.label << " ";
    std::cout << std::endl;
    return 0;
}