#include <iostream>
#include <stack>
using namespace std;

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

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    int element = 400;

    insertAtBottom(st, element);

    while(!st.empty()){
        cout << st.top() << " ";    //top = 30 then pop then top 20 then pop
        st.pop();
    }
}