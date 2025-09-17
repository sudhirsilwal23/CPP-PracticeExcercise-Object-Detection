#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    double width, height;
};

int main() {
    std::vector<BoundingBox> allBoxes = {{10, 20}, {50, 50}, {30, 60}, {20, 30}, {40, 40}};
    std::vector<BoundingBox> subVector(3);
    std::copy(allBoxes.begin(), allBoxes.begin() + 3, subVector.begin());
    std::cout << "Copied " << subVector.size() << " bounding boxes." << std::endl;
    return 0;
}