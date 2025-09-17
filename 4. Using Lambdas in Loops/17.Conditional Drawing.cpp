#include <iostream>
#include <vector>

struct BoundingBox {
    float confidence;
    int x, y, w, h;
};

int main() {
    std::vector<BoundingBox> detections = {
        {0.9f, 10, 20, 50, 50},
        {0.4f, 100, 120, 30, 40},
        {0.8f, 200, 210, 60, 60}
    };

    float draw_threshold = 0.7f;
    
    for (const auto& box : detections) {
        auto draw_if_high_confidence = [&](const BoundingBox& b) {
            if (b.confidence > draw_threshold) {
                std::cout << "Drawing box at (" << b.x << ", " << b.y << ") with confidence " << b.confidence << std::endl;
            } else {
                std::cout << "Skipping low confidence box at (" << b.x << ", " << b.y << ")" << std::endl;
            }
        };
        draw_if_high_confidence(box);
    }
    return 0;
}