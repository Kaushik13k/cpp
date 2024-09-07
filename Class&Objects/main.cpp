#include <iostream>
using namespace std;

// classes and objects

class Person{

};

class Student {
   public:
       // properties
       int age;
       int weight;

       // Constructor
       Student(){
           cout << "initialising the object" << endl;
       }

       // behaviors  
       void running(){
           cout << "I am running" << endl;
       }

       void walk(){
           cout << "I am walking" << endl;
       }

       // Destructor
       ~Student(){
           cout << "Destructing the object" << endl;
       }
};

int main(){
   cout << sizeof(Person) << endl; // empty class takes 1bytes
   cout << sizeof(Student) << endl;

   //Object creation

   //1. Static way
   Student s1;
   s1.age = 50;
   s1.walk();

   //2. Dynamic way
   Student* s = new Student();
   // method 1
   (*s).age = 20;
   s->age = 20;
   // method 2
   (*s).running();
   s->running();

   return 0;
}