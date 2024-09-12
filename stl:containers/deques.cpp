#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Creation
    deque<int> dq;

    // Insertion
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);
    dq.push_front(400);

    // Deletion
    dq.pop_back();
    dq.pop_front();

    deque<int>::iterator it = dq.begin();

    while(it != dq.end()){
        cout << *it << endl;
        it++;
    }

}