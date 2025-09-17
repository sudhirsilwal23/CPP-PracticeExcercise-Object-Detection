#include <iostream>
#include <deque>
#include <string>

struct BoundingBox {
    int id;
    std::string priority;
};

int main() {
    std::deque<BoundingBox> processingQueue;
    
    processingQueue.push_front({101, "high"});
    processingQueue.push_front({102, "high"});
    processingQueue.push_back({201, "low"});
    processingQueue.push_back({202, "low"});

    std::cout << "Processing queue (from front to back):" << std::endl;
    while (!processingQueue.empty()) {
        BoundingBox current = processingQueue.front();
        processingQueue.pop_front();
        std::cout << "Processing ID " << current.id << " with " << current.priority << " priority." << std::endl;
    }
    return 0;
}