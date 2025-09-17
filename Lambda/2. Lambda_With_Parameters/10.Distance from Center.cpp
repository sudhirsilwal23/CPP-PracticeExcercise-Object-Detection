#include <iostream>
#include <vector>
#include <cmath>

struct DetectedObject {
    int x, y, width, height;
};

int main() {
    int image_width = 640;
    int image_height = 480;
    std::vector<DetectedObject> detections = {
        {50, 50, 100, 100}, {300, 200, 50, 50}
    };

    auto calculate_distance = [&](const DetectedObject& obj) {
        float center_x = obj.x + obj.width / 2.0f;
        float center_y = obj.y + obj.height / 2.0f;
        float image_center_x = image_width / 2.0f;
        float image_center_y = image_height / 2.0f;
        
        return std::sqrt(std::pow(center_x - image_center_x, 2) + 
                         std::pow(center_y - image_center_y, 2));
    };

    for (const auto& obj : detections) {
        std::cout << "Distance of object from center: " << calculate_distance(obj) << std::endl;
    }
    return 0;
}