#include <iostream>
using namespace std;

int sum_of_array(int arr1[], int size_of_arr){

   int sum_arr = 0;

   for (int i = 0; i< size_of_arr; i++){
       sum_arr += arr1[i];
   }
   return sum_arr;
}

int main(){
   // Declare
   int a[10];

   // intitialisatino
   int b[10] = {1, 2, 3, 4, 5};

   // // Print the array elements
   // cout << b;
   // for (int i = 0; i < 10; i++) {
   //     cout << b[i] << " ";
   // }

   // // Take input
   // for (int i = 0; i < 5; i++ ){
   //     cin >> a[i];
   // }


   // // PROBLEM: Sum of array
   // int size_of_arr = sizeof(b) / sizeof(b[0]);

   // int result = sum_of_array(b, size_of_arr);
   // cout << result;


   // // 2D-Array
   // int 2dArr[2][4] = {
   //                     {1, 2, 3, 4},
   //                     {5, 6, 7, 8}
   //                     };

   //Char arr
   char arrChar[] = "kaushik";
   cout << arrChar;

   // Diff between the char arr and int arr: the INT-ARR will print the base address. However the STR-ARR prints the complete string;


   // String
   // Declare
   string name;

   // intitialisatino
   string name1 = "kaushik";

   // Reference Variable
   int h = 1;
   int &temp = h; // reference varaiable. both a, temp are same now

   // passby value and pass-by-reference
   // Pass bu value creates a copy. and the 2 vars will have 2 different address in memory.
   // Pass by reference doesnt. takes the same reference of the variable
}