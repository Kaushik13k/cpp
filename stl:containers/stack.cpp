#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation
    stack<int> s; 

    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // size
    cout << "Size: " << s.size() << endl;

    // top
    cout << "Top: " << s.top() << endl;

    // pop
    s.pop();
    cout << "Size: " << s.size() << endl;

    // empty
    cout << "Empty: " << s.empty() << endl;

    return 0;
}