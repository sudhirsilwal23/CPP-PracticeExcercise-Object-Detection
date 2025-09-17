#include <iostream>

struct Detection {
    double confidence;
};

void adjustConfidence(Detection det) {
    det.confidence += 0.1;
    std::cout << "Adjusted confidence inside function: " << det.confidence << std::endl;
}

int main() {
    Detection myDet = {0.75};
    adjustConfidence(myDet);
    std::cout << "Original confidence after function call: " << myDet.confidence << std::endl;
    return 0;
}