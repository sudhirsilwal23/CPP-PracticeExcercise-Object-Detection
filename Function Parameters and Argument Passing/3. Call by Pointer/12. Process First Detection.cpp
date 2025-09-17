#include <iostream>

struct Detection {
    double confidence;
};

void processFirstDetection(Detection* detections, int size) {
    if (detections && size > 0) {
        detections[0].confidence = 1.0;
    }
}

int main() {
    Detection dets[3] = {{0.8}, {0.4}, {0.9}};
    std::cout << "Original first detection confidence: " << dets[0].confidence << std::endl;
    processFirstDetection(dets, 3);
    std::cout << "New first detection confidence: " << dets[0].confidence << std::endl;
    return 0;
}