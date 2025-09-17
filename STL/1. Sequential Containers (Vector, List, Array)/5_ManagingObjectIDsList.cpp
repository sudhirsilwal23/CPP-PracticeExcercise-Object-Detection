#include <iostream>
#include <list>

class ObjectDetector {
private:
    std::list<int> activeIds;
public:
    void objectDetected(int id) {
        activeIds.push_back(id);
        std::cout << "Object with ID " << id << " detected." << std::endl;
    }
    void objectLost(int id) {
        activeIds.remove(id);
        std::cout << "Object with ID " << id << " lost." << std::endl;
    }
    void printActiveIds() {
        std::cout << "Active IDs: ";
        for (int id : activeIds) {
            std::cout << id << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    ObjectDetector detector;
    detector.objectDetected(101);
    detector.objectDetected(102);
    detector.objectDetected(103);
    detector.printActiveIds();
    detector.objectLost(102);
    detector.printActiveIds();
    return 0;
}