#include<iostream>
using namespace std;

// compile time polymorphism (Static)
    // - Function Overloading
class Add{
    public:
        int add(int a, int b){
            return a+b;
        }
        int add(int a, int b, int c){
            return a+b+c;
        }
        float add(float a, float b){
            return a+b;
        }
};
    // - Operator Overloading
class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r=0, int i=0){
            real = r;
            imag = i;
        }
        Complex operator + (Complex const &obj){
            Complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        void display(){
            cout<<real<<" + i"<<imag<<endl;
        }
};

// runtime polymarphism
class Shape{
    public:
        virtual void draw(){
            cout<<"Drawing Shape"<<endl;
        }
};

class Circle: public Shape{
    public:
        void draw(){
            cout<<"Drawing Circle"<<endl;
        }
};

class Rectangle: public Shape{
    public:
        void draw(){
            cout<<"Drawing Rectangle"<<endl;
        }
};

int main(){

    return 0;
}