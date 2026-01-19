#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "Hello, C++ in VS Code!" << std::endl;
    
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    int x = 42;
    std::cout << "Value of x: " << x << std::endl;
    
    return 0;
}