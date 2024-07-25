#include <iostream>

int main() {
    // Implicit casting
    // int to float
    int num1 = 10;
    float num2 = 5.5;
    float result1 = num1 + num2;
    std::cout << result1 << std::endl;

    // char to int
    char ch1 = 'A';
    int num3  = ch1 + 1;
    std::cout << num3 << std::endl;

    // int to char
    int num4 = 66;
    char ch2 = num4 + 1;
    std::cout << ch2 << std::endl;
    
    // Explicit casting
    // int to float
    int num5 = 10;
    float num6 = 5.5;
    float result2 = num5 + (int)num6;
    std::cout << result2 << std::endl;
    return 0;
}