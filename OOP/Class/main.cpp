#include <iostream>

class Car {
    public:
        std::string brand, model;
        int milage=0;

        void drive(int distance){
            milage += distance;
        }

        void show_data() {
            std::cout << "Your Vehicle details is:" << std::endl;
            std::cout << "The Brand Name is:" << brand << std::endl;
            std::cout << "The Model is:" << model << std::endl;
            std::cout << "The Milage is:" << milage << std::endl;
        }
};

int main() {
    Car first_car;
    first_car.brand = "BMW";
    first_car.model = "X7";
    first_car.drive(90);

    first_car.show_data();
    return 0;
}