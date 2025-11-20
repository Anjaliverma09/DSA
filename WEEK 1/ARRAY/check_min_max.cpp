#include<iostream>
#include<limits.h >
using namespace std;

findMinArr(int a[], int size){
    int minAns = INT_MAX;

    for(int i=0; i<size; i++){
        if(minAns > a[i]){
        minAns = a[i];
        }
    }
    return minAns;
}

int main(){
    int a[] = {10,12,8,4,2,1,7,15};
    int size = 8;

    int minimum = findMinArr(a, size);
    cout << "Minimum Number is: " << minimum << endl;
}
