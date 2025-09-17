#include <iostream>
#include <stack>
#include <string>

struct BoundingBox {
    int id;
    std::string label;
};

void addDetection(std::stack<BoundingBox>& history, const BoundingBox& newBox) {
    if (history.size() >= 5) {
        std::stack<BoundingBox> temp;
        while (history.size() > 1) {
            temp.push(history.top());
            history.pop();
        }
        history.pop();
        while (!temp.empty()) {
            history.push(temp.top());
            temp.pop();
        }
    }
    history.push(newBox);
}

void printHistory(const std::stack<BoundingBox>& history) {
    std::stack<BoundingBox> temp = history;
    std::cout << "Recently Processed Detections (LIFO):" << std::endl;
    while (!temp.empty()) {
        std::cout << "- ID " << temp.top().id << " (" << temp.top().label << ")" << std::endl;
        temp.pop();
    }
}

int main() {
    std::stack<BoundingBox> recentlyProcessed;
    addDetection(recentlyProcessed, {1, "car"});
    addDetection(recentlyProcessed, {2, "pedestrian"});
    addDetection(recentlyProcessed, {3, "truck"});
    addDetection(recentlyProcessed, {4, "bus"});
    addDetection(recentlyProcessed, {5, "car"});
    printHistory(recentlyProcessed);
    addDetection(recentlyProcessed, {6, "bike"});
    printHistory(recentlyProcessed);
    return 0;
}