#include <iostream>
#include <string>

struct BoundingBox {
    int x, y, width, height;
};

class DetectedObject {
public:
    std::string label;
    BoundingBox bbox;
};

void processObject(DetectedObject* obj) {
    std::cout << "Processing object with label: " << obj->label << std::endl;
}

int main() {
    DetectedObject* car = new DetectedObject;
    car->label = "car";
    processObject(car);
    delete car;
    return 0;
}