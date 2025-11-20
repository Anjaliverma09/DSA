#include <iostream>
using namespace std;

void fun(int a[], int n){
    cout << "Array elements are: ";
    for(int i=0; i<n; ++i)
    cout << a[i] << " ";
}

int main(){
    // int a[n] = {2,4,6,8};
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *a = new int[n]();   //0 by default and without() it maybe garbage & 0 sometimes
    
    cout << "Enter elements of array: ";
    for(int i=0; i<n; i++){
        int data;
        cin >> data;
        a[i] = data;
    }
    fun(a,n);
}