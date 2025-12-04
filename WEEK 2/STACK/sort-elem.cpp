#include <iostream>
#include <stack>
using namespace std;

void sortElement(stack<int> &st, int &element){
    if(st.empty() || st.top() < element){
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    //recursion
    sortElement(st, element);

    //backtracking
    st.push(temp);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    int element = 15;
    sortElement(st, element);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0 ;
}    