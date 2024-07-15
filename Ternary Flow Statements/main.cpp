#include <iostream>

int main() {
    int x = 10;
    int y = 20;

    int result = (x > y) ? x : y;
    // Syntax: condition ? expression_if_true : expression_if_false;
    
    std::cout << "the larger number is : " << result << std::endl;
    return 0;
}