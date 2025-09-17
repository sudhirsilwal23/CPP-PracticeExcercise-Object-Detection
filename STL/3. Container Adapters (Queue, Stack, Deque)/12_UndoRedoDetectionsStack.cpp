#include <iostream>
#include <stack>

struct BoundingBox {
    double x, y, width, height;
};

int main() {
    std::stack<BoundingBox> history;
    BoundingBox currentBox = {10, 20, 50, 40};
    
    std::cout << "Initial state: (" << currentBox.x << ", " << currentBox.y << ")\n";
    history.push(currentBox);

    currentBox.width *= 1.5;
    currentBox.height *= 1.5;
    std::cout << "Modified state: (" << currentBox.x << ", " << currentBox.y << ")\n";
    history.push(currentBox);

    if (!history.empty()) {
        history.pop();
        currentBox = history.top();
        std::cout << "Undo: Reverted to state (" << currentBox.x << ", " << currentBox.y << ")\n";
    }
    return 0;
}