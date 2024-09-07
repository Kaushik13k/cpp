// Encapsulation
#include<iostream>
using namespace std;

class Student{
   public:
       int id;
       string name;
       int age;
   private:
       int gpa;
       string place;

   public:
       Student(){
           cout << "Student inside the creator." << endl;
       }

       void run(){
           cout << "Student is running." << endl;
       }

       ~Student(){
           cout << "Student inside the destructor." << endl;
       }
   private:
       void subjectGpa(){
           cout << "subjectGpa is high." << endl;
       }

};

int main(){
   Student *s = new Student();
   (*s).id = 10;
   cout << "The student id is: " << (*s).id << endl;
   // cout << "The student id is: " << (*s).gpa << endl; // This will give error

   delete s;
   return 0;
}

// TO ACCESS AND EDIT THE PRIVATE VALUES CREATE A METHODS IN THE CLASS AND THEN TRY TO ACCESS (GETTER AND SETTER METHODS)