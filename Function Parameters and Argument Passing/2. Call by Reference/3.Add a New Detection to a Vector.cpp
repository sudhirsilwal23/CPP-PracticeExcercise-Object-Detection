#include <iostream>
#include <vector>

struct Detection {
    double confidence;
};

void addDetection(std::vector<Detection>& detections, const Detection& newDet) {
    detections.push_back(newDet);
}

int main() {
    std::vector<Detection> dets = {{0.8}, {0.9}};
    std::cout << "Vector size before: " << dets.size() << std::endl;
    addDetection(dets, {0.7});
    std::cout << "Vector size after: " << dets.size() << std::endl;
    return 0;
}