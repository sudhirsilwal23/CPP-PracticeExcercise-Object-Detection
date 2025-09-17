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

void swapPointers(DetectedObject*& ptr1, DetectedObject*& ptr2) {
    DetectedObject* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main() {
    DetectedObject* obj1 = new DetectedObject;
    obj1->label = "cat";
    DetectedObject* obj2 = new DetectedObject;
    obj2->label = "dog";

    std::cout << "Before swap:" << std::endl;
    std::cout << "  obj1 points to: " << obj1->label << std::endl;
    std::cout << "  obj2 points to: " << obj2->label << std::endl;

    swapPointers(obj1, obj2);

    std::cout << "After swap:" << std::endl;
    std::cout << "  obj1 points to: " << obj1->label << std::endl;
    std::cout << "  obj2 points to: " << obj2->label << std::endl;

    delete obj1;
    delete obj2;
    return 0;
}