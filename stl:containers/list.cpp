#include<iostream>
#include<list>
using namespace std;

int main(){
    // Creation
    list<int> myList;

    // Insertion
    myList.push_back(2);
    myList.push_back(3);
    myList.push_back(4);
    myList.push_front(1);

    // Deletion
    myList.pop_back();
    myList.pop_front();

    // Access
    cout << myList.front() << endl;
    cout << myList.back() << endl;

    // Size
    cout << myList.size() << endl;

    // empty
    cout << myList.empty() << endl;

    // insert
    myList.insert(myList.begin(), 0);

    // Iteration
    list<int>::iterator it = myList.begin();
    while(it != myList.end()){
        cout << *it << " ";
        it++;
    }



    // clear
    myList.clear();

    return 0;
}