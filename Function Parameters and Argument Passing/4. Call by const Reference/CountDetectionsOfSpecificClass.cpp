#include <iostream>
#include <vector>
#include <string>

struct Detection {
    std::string className;
};

int countClassDetections(const std::vector<Detection>& detections, const std::string& targetClass) {
    int count = 0;
    for (const auto& det : detections) {
        if (det.className == targetClass) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<Detection> dets = {{"car"}, {"person"}, {"car"}, {"bicycle"}};
    std::cout << "Number of 'car' detections: " << countClassDetections(dets, "car") << std::endl;
    return 0;
}