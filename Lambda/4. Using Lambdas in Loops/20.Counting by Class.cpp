#include <iostream>
#include <vector>
#include <map>

struct DetectedObject {
    std::string object_class;
};

int main() {
    std::vector<DetectedObject> detections = {
        {"car"}, {"person"}, {"car"}, {"bicycle"}, {"person"}, {"car"}
    };
    std::map<std::string, int> class_counts;

    for (const auto& obj : detections) {
        auto increment_count = [&]() {
            class_counts[obj.object_class]++;
        };
        increment_count();
    }

    std::cout << "Object counts by class:" << std::endl;
    for (const auto& pair : class_counts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}