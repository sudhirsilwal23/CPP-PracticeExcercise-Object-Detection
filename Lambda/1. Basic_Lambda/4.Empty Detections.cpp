#include <iostream>
#include <vector>
#include <algorithm>

struct DetectedObject {};

int main() {
    std::vector<DetectedObject> detections = {}; // An empty vector
    
    auto is_empty = [](const std::vector<DetectedObject>& vec) {
        return vec.empty();
    };
    
    std::cout << "Is the detections vector empty? " 
              << std::boolalpha << is_empty(detections) << std::endl;
    
    detections.push_back({}); // Add an object
    std::cout << "After adding an object, is it empty? " 
              << std::boolalpha << is_empty(detections) << std::endl;
    return 0;
}