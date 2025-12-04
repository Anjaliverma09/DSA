#include <iostream>
#include <stack>
using namespace std;
//T.C: O(n2)

void insertAtBottom(stack<int> &st, int &element){
    if(st.empty()){
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    //recursion
    insertAtBottom(st, element);

    //backtarcking
    st.push(temp);
}

void reverseStack(stack<int> &st){
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();

    //recursion
    reverseStack(st);

    //backtracking
    insertAtBottom(st, temp);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //without reverse: 50,40,30,20,10

    cout << "With reverse: " << reverseStack(st);
    while(!st.empty()){
        cout << st.top() << " ";    
        st.pop();
    }

    return 0;
}    