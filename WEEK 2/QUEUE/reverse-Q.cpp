#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseQ(queue<int> &q){
    stack<int> st;
    
    while(!q.empty()){
        int frontEle = q.front();
        q.pop();

        st.push(frontEle);
    }

    while(!st.empty()){
        int element = st.top();
        st.pop();

        q.push(element);
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    reverseQ(q);
    cout << "Reverse queue: " << endl;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        cout << element << endl;
    }

}