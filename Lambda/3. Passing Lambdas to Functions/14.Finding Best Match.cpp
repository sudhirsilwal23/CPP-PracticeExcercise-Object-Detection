#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>

struct DetectedObject {
    int x, y;
};

const DetectedObject* find_best_match(const std::vector<DetectedObject>& candidates, 
                                      const DetectedObject& target, 
                                      std::function<double(const DetectedObject&, const DetectedObject&)> score_func) {
    if (candidates.empty()) return nullptr;
    
    return &(*std::max_element(candidates.begin(), candidates.end(), 
                                [&](const DetectedObject& a, const DetectedObject& b) {
        return score_func(a, target) < score_func(b, target);
    }));
}

int main() {
    std::vector<DetectedObject> candidates = {{10, 10}, {50, 50}, {100, 100}};
    DetectedObject target = {40, 40};
    
    auto distance_score = [](const DetectedObject& a, const DetectedObject& b) {
        return -std::sqrt(std::pow(a.x - b.x, 2) + std::pow(a.y - b.y, 2));
    };

    const DetectedObject* best_match = find_best_match(candidates, target, distance_score);
    
    if (best_match) {
        std::cout << "Best match found at coordinates: (" << best_match->x << ", " << best_match->y << ")" << std::endl;
    }
    return 0;
}