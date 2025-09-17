#include <iostream>
#include <string>

struct BoundingBox {
    int x, y, width, height;
};

class DetectedObject {
public:
    std::string label = "object";
    BoundingBox bbox;
};

int main() {
    DetectedObject* obj = new DetectedObject;
    std::cout << "Before delete, pointer is valid: " << obj->label << std::endl;
    delete obj;
    obj = nullptr;

    if (obj == nullptr) {
        std::cout << "Pointer has been set to nullptr." << std::endl;
    }

    // The following line would cause a runtime error. It is commented out to show best practice.
    // std::cout << "Attempt to dereference a null pointer: " << obj->label << std::endl;

    return 0;
}