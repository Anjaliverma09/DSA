#include <iostream>
using namespace std;

int increamentBy1(int n){  //call by value i.e. we using diff n
    n = n + 1;
    return n;
}

int main(){
    int n;
    cout << "Enter a value: ";
    cin >> n;
     
    n = increamentBy1(n);
    cout << "increament val is: " << n;
    return 0;
}