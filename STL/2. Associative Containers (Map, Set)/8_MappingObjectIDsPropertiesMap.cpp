#include <iostream>
#include <map>
#include <string>

struct ObjectProperties {
    std::string color;
    double speed;
    double confidence_score;
};

void printObjectProperties(const std::map<int, ObjectProperties>& objMap, int id) {
    auto it = objMap.find(id);
    if (it != objMap.end()) {
        std::cout << "Properties for Object ID " << id << ":" << std::endl;
        std::cout << "  Color: " << it->second.color << std::endl;
        std::cout << "  Speed: " << it->second.speed << " km/h" << std::endl;
        std::cout << "  Confidence: " << it->second.confidence_score << std::endl;
    } else {
        std::cout << "Object with ID " << id << " not found." << std::endl;
    }
}

int main() {
    std::map<int, ObjectProperties> trackedObjects = {
        {101, {"blue", 55.2, 0.95}},
        {102, {"red", 40.0, 0.88}},
        {103, {"green", 60.5, 0.99}}
    };
    printObjectProperties(trackedObjects, 102);
    printObjectProperties(trackedObjects, 999);
    return 0;
}