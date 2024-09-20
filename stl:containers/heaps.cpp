#include<iostream>
#include<queue>
using namespace std;

int main(){
   // min-heap -> minimum value -> highest priority
   priority_queue<int, vector<int>, greater<int> > pq;

   pq.push(100);
   pq.push(200);
   pq.push(300);
   pq.push(400);

   cout << pq.top << endl;

   // deletes the highest priority
   pq.pop()

   return 0;
}