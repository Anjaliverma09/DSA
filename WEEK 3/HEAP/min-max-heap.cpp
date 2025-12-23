#include <iostream>
#include <queue>
using namespace std;
//Implementtaion of min, max heap using priority queue

int main(){
    //min-heap creation
    priority_queue<int, vector<int>, greater<int> > pq;

    pq.push(100);
    pq.push(90);
    pq.push(70);

    cout << "Top: " << pq.top() << endl;
    pq.pop();
    cout << "Top: " << pq.top() << endl;
    cout << "Size: " << pq.size() << endl;

    if(pq.empty()) cout << "empty";
    else cout << "Non-empty" << endl;


    //create max-heap
    // priority_queue<int> pq;

    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // pq.push(40);
    // pq.push(50);

    // cout << "Top: " << pq.top() << endl;
    // pq.pop();
    // cout << "Top: " << pq.top() << endl;

    // cout << "Size: " << pq.size() << endl;

    // if(pq.empty()) cout << "Empty" << endl;
       
    // else cout << "Non-Empty" << endl;
   

    return 0;
}