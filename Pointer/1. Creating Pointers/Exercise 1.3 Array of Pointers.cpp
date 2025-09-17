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
    DetectedObject* obj_ptrs[3];
    obj_ptrs[0] = new DetectedObject;
    obj_ptrs[0]->label = "person";
    obj_ptrs[1] = new DetectedObject;
    obj_ptrs[1]->label = "bicycle";
    obj_ptrs[2] = new DetectedObject;
    obj_ptrs[2]->label = "dog";

    std::cout << "Addresses in array:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "  obj_ptrs[" << i << "]: " << obj_ptrs[i] << std::endl;
        delete obj_ptrs[i];
    }
    return 0;
}