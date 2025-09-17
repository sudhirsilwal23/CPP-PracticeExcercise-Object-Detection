#include <iostream>
#include <map>

struct BoundingBox {
    double x, y, width, height;
};

void fastLookup(const std::map<int, BoundingBox>& boxMap, int id) {
    auto it = boxMap.find(id);
    if (it != boxMap.end()) {
        const auto& box = it->second;
        std::cout << "Found Bounding Box for ID " << id << ": (" << box.x << ", " << box.y << ")" << std::endl;
    } else {
        std::cout << "Bounding Box for ID " << id << " not found." << std::endl;
    }
}

int main() {
    std::map<int, BoundingBox> detections = {
        {101, {10, 20, 50, 40}},
        {202, {100, 150, 30, 60}},
        {303, {250, 250, 75, 75}}
    };
    fastLookup(detections, 202);
    fastLookup(detections, 999);
    return 0;
}