#include<iostream>
using namespace std;

class Vehicle {
    string name;
    string color;
    string model;

    public:
        Vehicle() {
            cout << "This is a Vehicle" << endl;
        }

        void start() {
            cout << "Vehicle started" << endl;
        }

        void stop() {
            cout << "Vehicle stopped" << endl;
        }
};

class Car : public Vehicle {
    string type;
    string brand;

    public:
        Car() {
            cout << "This is a Car" << endl;
        }

        void startAC() {
            cout << "AC started" << endl;
        }

        void stopAC() {
            cout << "AC stopped" << endl;
        }
};
int main() {
    Car *car = new Car();
    (*car).start();
    (*car).startAC();
    return 0;
}