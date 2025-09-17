#include <iostream>
#include <set>
#include <random>

int generateUniqueId(std::set<int>& usedIds) {
    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<> distrib(1, 1000);
    int newId;
    do {
        newId = distrib(gen);
    } while (usedIds.count(newId));
    usedIds.insert(newId);
    return newId;
}

int main() {
    std::set<int> trackedObjectIds;
    std::cout << "Generated unique IDs:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        int newId = generateUniqueId(trackedObjectIds);
        std::cout << "- " << newId << std::endl;
    }
    return 0;
}