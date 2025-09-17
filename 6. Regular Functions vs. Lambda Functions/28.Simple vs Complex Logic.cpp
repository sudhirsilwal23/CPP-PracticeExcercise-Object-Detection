#include <iostream>
#include <vector>
#include <string>

struct DetectedObject {
    std::string object_class;
    float confidence;
};

// Simple, reusable regular function
void print_object_info(const DetectedObject& obj) {
    std::cout << "Class: " << obj.object_class << ", Confidence: " << obj.confidence << std::endl;
}

int main() {
    DetectedObject obj1 = {"car", 0.95f};
    DetectedObject obj2 = {"person", 0.60f};

    // Call the simple regular function
    print_object_info(obj1);

    // Use a lambda for specific, complex logic
    auto print_conditionally = [&]() {
        if (obj2.confidence > 0.7f) {
            std::cout << "High-confidence object found: ";
            print_object_info(obj2);
        } else {
            std::cout << "Object detected, but not high-confidence." << std::endl;
        }
    };
    print_conditionally();
    return 0;
}