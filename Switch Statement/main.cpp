#include <iostream>

int main() {
    char grade;
    std::cout << "Enter a your grade: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "Your marks in range 90 - 100" << std::endl;
            break;
        case 'B':
            std::cout << "Your marks in range 80 - 90" << std::endl;
            break;
        case 'C':
            std::cout << "Your marks in range 70 - 80" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }

    return 0;
}