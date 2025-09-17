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
    obj_ptrs[2]->label = "car";

    DetectedObject** ptr_array_start = obj_ptrs;

    std::cout << "Accessing labels using pointer arithmetic:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "  Object " << i << " label: " << (*ptr_array_start)->label << std::endl;
        ptr_array_start++;
    }

    for (int i = 0; i < 3; ++i) {
        delete obj_ptrs[i];
    }
    return 0;
}