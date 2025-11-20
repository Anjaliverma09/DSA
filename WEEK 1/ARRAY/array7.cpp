#include <iostream>
using namespace std;

void sortZeroOne(int a[], int n){
    int zeroCount = 0;
    int oneCount = 0;

    //counting that how many zero's and one's
    for(int i=0; i<n; i++){
        if(a[i] == 0)
        zeroCount++;          //6
        if(a[i] == 1)
        oneCount++;           //4  
    }

    //arranging zero's in starting and one's in ending
    int index = 0;
    while(zeroCount--){
        a[index] = 0;
        index++;
    }
    while(oneCount--){
        a[index] = 1;
        index++;
    }
}

//sorting array
int main(){
    int a[] = {0,0,0,1,1,0,1,0,0,1};     //6-1 ; 4-0
    int n = 10;

    sortZeroOne(a,n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}