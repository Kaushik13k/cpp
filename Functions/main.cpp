#include <iostream>

void countNumbers(int n) {
    for (int i=0; i < n; i = i+1){
        std::cout << i <<std::endl;
    }
}

int sum(int a, int b){
    int result = a + b;
    return result;
}
int main() {
    countNumbers(5);
    int res = sum(1, 2);
    std::cout << res <<std::endl;
    return 0;
}