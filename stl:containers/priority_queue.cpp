#include<iostream>>
#include<queue>
using namespace std;

int main(){
    // Creation
    priority_queue<int> pq;
    // max-heap -> max value -> Higest Priority

    // Insertion
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);

    // top element -> Higest prority element
    cout << pq.top() << endl;

    // pop element -> Higest prority element
    pq.pop();


    return 0;
}