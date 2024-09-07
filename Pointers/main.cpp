#include<iostream>
using namespace std;

int solve(int arr[]){
   cout << "the size inside the function is: " << sizeof(arr) << endl;
}

int main(){
   int number = 100;
   int *ptr = &number;
   cout << "Printing number" << number << endl; // value 100
   cout << "Printing the address of number" << &number << endl; // address of var number
   cout << "Printing ptr number" << ptr << endl; // address of var number
   cout << "Printing &ptr number" << &ptr << endl; // address of var ptr
   cout << "Printing *ptr number" << *ptr << endl; // value 100

   int arr[4] = {1, 2, 3, 4};
   cout << "the size of array outside func is: " << sizeof(arr) << endl; // Here it prints 16 (4bit for int x 4 =  16)
   solve(arr); // Here it prints 8. because it sends arr as pinter

   // dynamic memory
   int *ptr = new int;
   *ptr = 5;
   cout << *ptr;

   delete ptr;

   return 0;
}