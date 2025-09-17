#include <iostream>
#include <vector>
#include <numeric>

struct DetectedObject {
    int width, height;
};

int main() {
    std::vector<DetectedObject> detections = {
        {10, 15}, {5, 5}, {20, 20}, {8, 12}, {3, 3}
    };
    
    bool any_small_area = std::any_of(detections.begin(), detections.end(), [](const DetectedObject& obj) {
        return (obj.width * obj.height) < 100;
    });

    std::cout << "Are there any objects with an area less than 100? " 
              << std::boolalpha << any_small_area << std::endl;
    return 0;
}