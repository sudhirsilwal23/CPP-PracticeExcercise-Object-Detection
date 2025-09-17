#include <iostream>
#include <list>
#include <cmath>
#include <vector>

struct BoundingBox {
    int id;
    double x, y, width, height;
};

struct TrackedObject {
    int id;
    double x, y;
};

double distance(const BoundingBox& box, const TrackedObject& tracked) {
    return std::sqrt(std::pow(box.x - tracked.x, 2) + std::pow(box.y - tracked.y, 2));
}

void trackObjects(std::list<TrackedObject>& trackedList, const std::vector<BoundingBox>& newDetections) {
    for (const auto& newBox : newDetections) {
        bool matchFound = false;
        for (auto& tracked : trackedList) {
            if (distance(newBox, tracked) < 20.0) {
                tracked.x = newBox.x;
                tracked.y = newBox.y;
                std::cout << "Updated position for tracked object with ID: " << tracked.id << std::endl;
                matchFound = true;
                break;
            }
        }
        if (!matchFound) {
            trackedList.push_back({newBox.id, newBox.x, newBox.y});
            std::cout << "Added new tracked object with ID: " << newBox.id << std::endl;
        }
    }
}

int main() {
    std::list<TrackedObject> trackedObjects = {{1, 10, 20}, {2, 100, 150}};
    std::vector<BoundingBox> newDetections = {{1, 12, 22, 50, 40}, {3, 200, 200, 30, 30}};
    trackObjects(trackedObjects, newDetections);
    return 0;
}