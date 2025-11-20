#include<iostream>
#include<limits.h >
using namespace std;

void printArr(int a[], int size){
    int start = 0;
    int end = 4;    //size-1

    //int i;
    while(start <= end){
        swap(a[start] , a[end]);
        start++;
        end--;

        //i++;
    }

    //printing the array
    cout << "reversed arary is: ";
    for(int i=0; i<size; i++){
    cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int a[] = {10,20,30,40,50};
    int size = 5;

    cout << "current array is: ";
    for(int i=0; i<size; i++){
    cout << a[i] << " ";
    }
    cout << endl;

    printArr(a, size);
    return 0;
}