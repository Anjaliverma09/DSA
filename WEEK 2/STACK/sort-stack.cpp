#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int> &st, int &element){
    if(st.empty() || st.top() < element){
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    //recursion
    insertSorted(st, element);

    //backtracking
    st.push(temp);
}

void sortStack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }

    int temp = st.top();
    st.pop();

    //recursion
    sortStack(st);

    //backtracking
    insertSorted(st, temp);
}

void printStack(stack<int> st){
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(5);
    st.push(18);
    st.push(2);

    // int element = 15;
    // insertSorted(st, element);

    cout << "Original stack: ";
    printStack(st);


    sortStack(st);
    cout << endl << "Sorted stack: ";
    printStack(st);
    

    return 0 ;
}    