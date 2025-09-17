#include <iostream>

struct Detection {
    double confidence;
    std::string className;
};

void printDetectionDetails(const Detection& det) {
    std::cout << "Class: " << det.className << ", Confidence: " << det.confidence << std::endl;
    // det.confidence = 0.5; // This would cause a compile error
}

int main() {
    Detection myDet = {0.95, "car"};
    printDetectionDetails(myDet);
    return 0;
}