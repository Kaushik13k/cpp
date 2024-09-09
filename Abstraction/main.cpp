#include<iostream>
#include "main.h"
using namespace std;

void birdTest(Bird *b){
    b->fly();
    b->sing();
}

int main(){
    Bird *b = new sparow();
    birdTest(b);
    return 0;
}