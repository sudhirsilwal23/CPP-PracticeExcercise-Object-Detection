#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

struct DetectedObject {
    std::string label;
    double confidence_score;
    double width, height;
};

int main() {
    std::vector<DetectedObject> detections = {
        {"car", 0.95, 50, 40}, {"pedestrian", 0.45, 10, 20},
        {"bus", 0.88, 70, 60}, {"pedestrian", 0.92, 12, 22}, {"car", 0.35, 45, 30}
    };
    auto newEnd = std::remove_if(detections.begin(), detections.end(),
        [](const DetectedObject& obj) { return obj.confidence_score < 0.5; });
    detections.erase(newEnd, detections.end());
    std::cout << "Filtered " << detections.size() << " detections." << std::endl;
    std::sort(detections.begin(), detections.end(),
        [](const DetectedObject& a, const DetectedObject& b) {
            return (a.width * a.height) < (b.width * b.height);
        });
    std::cout << "Sorted by area:" << std::endl;
    for (const auto& obj : detections) {
        std::cout << "  - " << obj.label << ", Area: " << (obj.width * obj.height) << std::endl;
    }
    double totalArea = std::accumulate(detections.begin(), detections.end(), 0.0,
        [](double sum, const DetectedObject& obj) {
            return sum + (obj.width * obj.height);
        });
    std::cout << "\nTotal area of filtered and sorted detections: " << totalArea << std::endl;
    return 0;
}