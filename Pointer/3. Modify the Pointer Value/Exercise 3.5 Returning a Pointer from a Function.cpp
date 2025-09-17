#include <iostream>
#include <string>
#include <vector>

struct BoundingBox {
    int x, y, width, height;
};

class DetectedObject {
public:
    std::string label;
    BoundingBox bbox;
};

DetectedObject* findLargestObject(std::vector<DetectedObject>& objects) {
    if (objects.empty()) {
        return nullptr;
    }

    DetectedObject* largest = &objects[0];
    int max_area = largest->bbox.width * largest->bbox.height;

    for (size_t i = 1; i < objects.size(); ++i) {
        int current_area = objects[i].bbox.width * objects[i].bbox.height;
        if (current_area > max_area) {
            max_area = current_area;
            largest = &objects[i];
        }
    }
    return largest;
}

int main() {
    std::vector<DetectedObject> detections;
    detections.push_back({"small_car", {10, 10, 50, 30}});
    detections.push_back({"person", {60, 60, 20, 50}});
    detections.push_back({"bus", {100, 100, 200, 100}});

    DetectedObject* largest_obj = findLargestObject(detections);

    if (largest_obj) {
        std::cout << "The largest detected object is: " << largest_obj->label
                  << " with an area of " << largest_obj->bbox.width * largest_obj->bbox.height << std::endl;
    }
    return 0;
}