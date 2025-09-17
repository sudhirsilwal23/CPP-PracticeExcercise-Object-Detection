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
    DetectedObject obj;
    DetectedObject* ptr1 = &obj;
    DetectedObject** ptr2 = &ptr1;

    std::cout << "Address of obj: " << &obj << std::endl;
    std::cout << "Value of ptr1 (address of obj): " << ptr1 << std::endl;
    std::cout << "Value of ptr2 (address of ptr1): " << ptr2 << std::endl;
    std::cout << "Accessing address of obj via ptr2: " << *ptr2 << std::endl;
    return 0;
}