#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverseQ(queue<int> &q, int k){
    -int n = q.size();
    if(q.empty()){
        return;
    }
    else if(k > n || k == 0){
        return;
    }

    stack<int> st;
    //push first k element into stack
    for(int i=0; i<k; i++){
        int temp = q.front();
        q.pop();
        st.push(temp);
    }

    //push all k element into queue 
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        q.push(temp);
    }

    //pop and push (n-k) element into queue again
    for(int i=0; i<(n-k); i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
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

    int k = 3;
    reverseQ(q, k);
    cout << "Reverse of kth elements: " << endl;
    while(!q.empty()){
        int temp = q.front();
        q.pop();
        cout << temp << " ";
    }
}