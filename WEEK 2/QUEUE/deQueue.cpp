#include <iostream>
#include <deque>
using namespace std;
//Doubly ended queue

int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_front(20);  
    dq.pop_back();

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    cout << "size: " << dq.size() << endl;

    return 0;
}