#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {
    int id;
    std::string object_class;
};

int main() {
    std::vector<DetectedObject> detections = {
        {1, "car"}, {2, "person"}, {3, "car"}, {4, "bus"}, {5, "car"}
    };
    int car_count = 0;
    
    std::for_each(detections.begin(), detections.end(), [&](const DetectedObject& obj) {
        if (obj.object_class == "car") {
            car_count++;
        }
    });

    std::cout << "Number of detected cars: " << car_count << std::endl;
    return 0;
}