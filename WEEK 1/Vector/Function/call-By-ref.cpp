#include <iostream>
using namespace std;

void increamentBy1(int &k){  //call by reference i.e. just a nickname of n
    k = k + 1;
   // return;
}

int main(){
    int n;
    cout << "Enter a value: ";
    cin >> n;
     
    increamentBy1(n);
    cout << "increament val is: " << n;
}