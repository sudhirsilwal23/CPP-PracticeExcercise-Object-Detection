#include <iostream>
#include <string>

struct BoundingBox {
    int x, y, width, height;
};

class DetectedObject {
public:
    std::string label;
    BoundingBox bbox;
    void printInfo() {
        std::cout << "Label: " << label << ", BoundingBox: ("
                  << bbox.x << ", " << bbox.y << ", "
                  << bbox.width << ", " << bbox.height << ")" << std::endl;
    }
};

int main() {
    DetectedObject* ptr_obj = new DetectedObject;
    ptr_obj->label = "person";
    ptr_obj->bbox = {10, 20, 50, 80};
    ptr_obj->printInfo();
    delete ptr_obj;
    return 0;
}