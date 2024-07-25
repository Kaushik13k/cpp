#include <iostream>

int main() {
    // for loop
    int n = 10;
    for (int i=0; i<n; i = i+1){
        std::cout << i << std::endl;
    }

    // while loop
    int j = 0;
    while (j < n){
        std::cout << j << std::endl;
        j = j + 1;
    }

    // do while loop
    int k = 0;
    do {
        std::cout << k << std::endl;
        k = k + 1;
    } while (k < n);
}