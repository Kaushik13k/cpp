#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    if (age < 18) {
        std::cout << "You are a minor." << std::endl;
    } else if (age >= 18 && age < 65) {
        std::cout << "You are an adult." << std::endl;
    } else {
        std::cout << "You are a senior." << std::endl;
    }
    return 0;
}