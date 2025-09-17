#include <iostream>
#include <vector>
#include <numeric>

struct DetectedObject {};

int main() {
    int processed_count = 0;
    std::vector<DetectedObject> detections1(5);
    std::vector<DetectedObject> detections2(3);

    auto process_batch = [&](const std::vector<DetectedObject>& batch) {
        processed_count += batch.size();
    };

    process_batch(detections1);
    process_batch(detections2);

    std::cout << "Total objects processed: " << processed_count << std::endl;
    return 0;
}