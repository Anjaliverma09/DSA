#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size: " << q.size() << endl;

    if(q.empty() == true){
        cout << "empty queue" << endl;
    }
    else{
        cout << "not empty" << endl;
    }

    cout << "front element is: " << q.front() << endl;
    cout << "last element is: " << q.back() << endl;

    q.pop();

    cout << "Size: " << q.size() << endl;

}