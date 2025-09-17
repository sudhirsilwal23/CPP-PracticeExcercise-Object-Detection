#include <iostream>

struct Detection {
    double confidence;
};

void updateConfidencePtr(Detection* detPtr, double newConfidence) {
    if (detPtr) {
        detPtr->confidence = newConfidence;
    }
}

int main() {
    Detection myDet = {0.85};
    std::cout << "Original confidence: " << myDet.confidence << std::endl;
    updateConfidencePtr(&myDet, 0.99);
    std::cout << "New confidence: " << myDet.confidence << std::endl;
    return 0;
}