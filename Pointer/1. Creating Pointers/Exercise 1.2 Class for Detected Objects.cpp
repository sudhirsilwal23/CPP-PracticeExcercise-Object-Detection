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

int main() {
    DetectedObject* ptr_obj = new DetectedObject;
    ptr_obj->label = "car";
    ptr_obj->bbox = {100, 150, 200, 100};
    std::cout << "Address of DetectedObject: " << ptr_obj << std::endl;
    delete ptr_obj;
    return 0;
}