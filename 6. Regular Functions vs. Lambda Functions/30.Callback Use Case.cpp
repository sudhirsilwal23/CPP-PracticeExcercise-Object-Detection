#include <iostream>
#include <functional>

// Function that takes a callback
void post_process(int object_id, std::function<void(int)> callback) {
    std::cout << "Post-processing started for object " << object_id << "." << std::endl;
    callback(object_id);
}

// Regular function as a callback
void log_to_console(int id) {
    std::cout << "Callback from regular function: Logging object ID " << id << std::endl;
}

int main() {
    // Pass a regular function as a callback
    post_process(1, log_to_console);
    
    // Pass a lambda as a callback
    post_process(2, [](int id) {
        std::cout << "Callback from lambda: Alerting system about object ID " << id << std::endl;
    });
    return 0;
}