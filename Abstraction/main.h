#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird{
    public:
        virtual void fly() = 0;
        virtual void sing() = 0;
};

class sparow : public Bird{
    public:
        void fly(){
            cout << "Sparow is flying" << endl;
        }
        void sing(){
            cout << "Sparow is singing" << endl;
        }
};

#endif // BIRD_H