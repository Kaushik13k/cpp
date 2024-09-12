#include<iostream>
#include<queue>
using namespace std;
 
int main(){
    // creation
    queue<int> q; 

    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // size
    cout << "Size: " << q.size() << endl;

    // front
    cout << "Front: " << q.front() << endl;

    // back
    cout << "Back: " << q.back() << endl;

    // pop
    q.pop();
    cout << "Size: " << q.size() << endl;

    // empty
    cout << "Empty: " << q.empty() << endl;

    return 0;
}