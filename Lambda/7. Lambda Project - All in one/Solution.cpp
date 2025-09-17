#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// Data structures
struct BoundingBox {
    int x, y, width, height;
};

struct DetectedObject {
    int id;
    float confidence;
    BoundingBox bbox;
};

// Use a simple 2D vector to simulate an image matrix
using Image = std::vector<std::vector<int>>;

// 2. Regular function
bool is_high_quality(const DetectedObject& obj, float threshold) {
    return obj.confidence > threshold;
}

int main() {
    // 1. Initial list of detections
    std::vector<DetectedObject> detections = {
        {1, 0.95f, {10, 20, 50, 40}},
        {2, 0.60f, {100, 150, 80, 70}},
        {3, 0.88f, {200, 50, 60, 60}},
        {4, 0.45f, {300, 200, 90, 80}}
    };

    // 3. Dynamic confidence threshold
    float min_confidence = 0.7f;
    
    std::vector<DetectedObject> filtered_detections;
    
    // 4. Filtering using lambda with capture
    std::copy_if(detections.begin(), detections.end(), std::back_inserter(filtered_detections),
                 /* YOUR FILTERING LAMBDA HERE */);

    std::cout << "Number of filtered detections: " << filtered_detections.size() << std::endl;

    // 5. Simulated image
    Image image(400, std::vector<int>(600, 0));

    // 6. Loop through the filtered list
    for (const auto& obj : filtered_detections) {
        // 7. Lambda with parameters and capture for drawing
        /* YOUR DRAWING LAMBDA HERE */
    }

    // 8. Print confirmation
    std::cout << "Bounding boxes for high-confidence detections have been drawn on the simulated image." << std::endl;
    // You can check a pixel value to confirm the drawing
    std::cout << "Pixel value at (30, 30) on image is: " << image[30][30] << std::endl;

    return 0;
}