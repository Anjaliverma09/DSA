#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;

    //insertion
    st.push(10);
    st.push(20);
    st.push(30);

    //size check
    cout << "size of stack is: " << st.size() << endl;

    //remove
    st.pop();

    if(st.empty())  cout << "Stack is empty" << endl;
    
    else cout << "stack is non-empty" << endl;

    cout << st.top();
}