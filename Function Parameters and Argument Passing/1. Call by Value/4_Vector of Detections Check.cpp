// Question: Create a function `countInvalidDetections` that takes a `std::vector<Detection>` by value. 
// The function should iterate through the vector and count how many detections have a confidence score below a threshold (e.g., `0.5`).


#include <iostream>
#include <vector>

// A structure to represent a detection with a confidence score.
struct Detection {
    double confidence;
};

// This function counts detections with a confidence score below 0.5.
// It takes the vector by value, meaning it operates on a copy.
int countInvalidDetections(std::vector<Detection> detections) {
    int count = 0;
    // Loop through the local copy of the vector.
    for (const auto& det : detections) {
        if (det.confidence < 0.5) {
            count++;
        }
    }
    return count;
}

int main() {
    // Create a vector of Detection objects.
    std::vector<Detection> dets = {{0.8}, {0.4}, {0.9}, {0.3}};

    // Call the function and print the result.
    std::cout << "Invalid detections count: " << countInvalidDetections(dets) << std::endl;

    return 0;
}