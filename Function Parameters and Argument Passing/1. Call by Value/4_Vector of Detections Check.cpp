#include <iostream>
#include <vector>

struct Detection {
    double confidence;
};

int countInvalidDetections(std::vector<Detection> detections) {
    int count = 0;
    for (const auto& det : detections) {
        if (det.confidence < 0.5) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<Detection> dets = {{0.8}, {0.4}, {0.9}, {0.3}};
    std::cout << "Invalid detections count: " << countInvalidDetections(dets) << std::endl;
    return 0;
}