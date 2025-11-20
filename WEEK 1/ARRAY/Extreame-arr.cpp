#include <iostream>
using namespace std;

extremeArr(int a[], int size){
    int start = 0;
    int end = size-1;

    cout << "Cureent array: ";  
    while(start <= end){
        cout << a[start] << " ";
        cout << a[end] << " ";

        start++;
        end--;
    }

    //printing array
    cout << endl << "Extreme array is: ";
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
}

int main(){
    int a[] = {10,20,30,40,50,60};
    int size = 6;

    extremeArr(a, size);
}