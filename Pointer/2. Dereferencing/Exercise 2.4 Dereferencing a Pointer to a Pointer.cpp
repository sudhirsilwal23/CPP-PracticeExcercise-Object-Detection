#include <iostream>
#include <string>

struct BoundingBox {
    int x, y, width, height;
};

class DetectedObject {
public:
    std::string label = "traffic light";
    BoundingBox bbox = {5, 5, 20, 40};
};

int main() {
    DetectedObject obj;
    DetectedObject* ptr1 = &obj;
    DetectedObject** ptr2 = &ptr1;

    std::cout << "Label via ptr2: " << (**ptr2).label << std::endl;
    std::cout << "Label via ptr2 (using ->): " << (*ptr2)->label << std::endl;
    return 0;
}