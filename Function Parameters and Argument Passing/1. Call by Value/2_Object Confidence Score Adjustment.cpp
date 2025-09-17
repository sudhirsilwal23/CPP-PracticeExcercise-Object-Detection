// Question: Create a function `adjustConfidence` that takes a `Detection` object by value. The function should increase the object's confidence 
//           score by `0.1` and then print the new score. Demonstrate that the original object's confidence remains unchanged.

#include <iostream>

// A structure to represent a detection with a confidence score.
struct Detection {
    double confidence;
};

// This function takes a Detection object by value.
// It modifies a copy of the object, leaving the original unchanged.
void adjustConfidence(Detection det) {
    // Increase the confidence score of the local copy.
    det.confidence += 0.1;
    std::cout << "Adjusted confidence inside function: " << det.confidence << std::endl;
}

int main() {
    // Create an instance of the Detection struct.
    Detection myDet = {0.75};

    // Call the function, passing the object by value.
    adjustConfidence(myDet);

    // Print the original object's confidence, showing it was not modified.
    std::cout << "Original confidence after function call: " << myDet.confidence << std::endl;

    return 0;
}