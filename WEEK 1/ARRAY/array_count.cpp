#include <iostream>
using namespace std;

void countZeroOne(int a[], int size){
    int oneCount = 0;
    int zeroCount = 0;

    for(int i=0; i<size; i++){
        if(a[i] == 1){
            oneCount++;
        }
        else if(a[i] == 0){
            zeroCount++;
        }
    }

    cout << "One is: " << oneCount << endl;
    cout << "Zero is: " << zeroCount << endl;
}
    

int main(){
    int a[] {0,1,1,1,0,0,1,0};
    int size = 8;
    countZeroOne(a, size);
}