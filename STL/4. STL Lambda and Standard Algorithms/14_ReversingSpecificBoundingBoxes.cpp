#include <iostream>
#include <vector>
#include <algorithm>

struct BoundingBox {
    int id;
};

int main() {
    std::vector<BoundingBox> boxes = {{1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}, {9}, {10}};
    std::reverse(boxes.begin() + 2, boxes.begin() + 7);
    std::cout << "Boxes after partial reverse:" << std::endl;
    for (const auto& box : boxes) {
        std::cout << box.id << " ";
    }
    std::cout << std::endl;
    return 0;
}