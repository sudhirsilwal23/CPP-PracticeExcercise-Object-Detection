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
    std::cout << "Processing object with label: " << obj->label
              << " and width: " << obj->bbox.width << std::endl;
}

int main() {
    DetectedObject* object1 = new DetectedObject;
    object1->label = "car";
    object1->bbox = {10, 10, 100, 50};
    processObject(object1);
    delete object1;
    return 0;
}