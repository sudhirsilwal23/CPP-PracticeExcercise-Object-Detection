#include <iostream>
#include <vector>
#include <numeric>
#include <functional>

struct DetectedObject {
    float confidence;
};

float process_batch(const std::vector<DetectedObject>& batch, 
                    std::function<float(const std::vector<DetectedObject>&)> processor) {
    return processor(batch);
}

int main() {
    std::vector<DetectedObject> detections = {
        {0.9f}, {0.8f}, {0.7f}, {0.6f}, {0.5f}
    };

    float avg_confidence = process_batch(detections, [](const std::vector<DetectedObject>& batch) {
        float sum = 0.0f;
        for (const auto& obj : batch) {
            sum += obj.confidence;
        }
        return sum / batch.size();
    });

    std::cout << "Average confidence for the batch: " << avg_confidence << std::endl;
    return 0;
}