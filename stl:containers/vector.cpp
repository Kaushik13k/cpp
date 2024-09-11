#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Create a vector of integers
    // vector<int> marks;
    vector<int> marks(5, -1); // Create a vector of size 5 with all elements as 10

    cout << *(marks.begin()) << endl; // to get value
    cout << marks.size() << endl; // to get size

    // Remove elements to the vector
    marks.pop_back();
    cout << marks.size() << endl;

    // Add elements to the vector
    marks.push_back(1);
    marks.push_back(2);
    marks.push_back(3);
    marks.push_back(4);
    cout << marks.size() << endl;

    // Front and back elements
    cout << marks.front() << endl;
    cout << marks.back() << endl;

    // Empty or not
    cout << "is empty or not" << marks.empty() << endl;

    // Accessing elements
    cout << marks[0] << endl;
    cout << marks.at(0) << endl;

    // capacity
    cout << marks.capacity() << endl;

    // insert
    marks.insert(marks.begin() + 2, 10);

    // swap
    vector<int> marks2(5, 10);

    // erase
    marks.erase(marks.begin() + 2);

    // iterator
    vector<int>::iterator it = marks.begin();

    while (it != marks.end())
    {
        cout << *it << endl;
        it++;
    }
    
    // clear
    marks.clear();

    // 2D vector
    vector<vector<int>> matrix(5, vector<int>(5, 0));
        
    return 0;
}