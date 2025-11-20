#include <iostream>
using namespace std;

int main(){
    int a[4];
    //taking input of array elements
        cout << "Enter the element of array: ";
    for(int i=0; i<4; i++){
        cin >> a[i];
    }

    //doubling each element of array
    cout<< "doubling each element is: ";
    for(int i=0; i<4; i++){
        cout << a[i]*2 << " ";
    }

    return 0;
}