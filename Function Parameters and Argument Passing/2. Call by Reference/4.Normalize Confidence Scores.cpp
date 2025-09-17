#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

struct Detection {
    double confidence;
};

void normalizeScores(std::vector<Detection>& detections) {
    if (detections.empty()) return;
    double max_score = 0.0;
    for (const auto& det : detections) {
        if (det.confidence > max_score) {
            max_score = det.confidence;
        }
    }
    if (max_score > 0) {
        for (auto& det : detections) {
            det.confidence /= max_score;
        }
    }
}

int main() {
    std::vector<Detection> dets = {{80}, {95}, {60}};
    normalizeScores(dets);
    for (const auto& det : dets) {
        std::cout << det.confidence << " ";
    }
    std::cout << std::endl;
    return 0;
}