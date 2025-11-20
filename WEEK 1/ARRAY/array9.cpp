#include<iostream>
using namespace std;
//-ve numbers at the starting & +ve in the end 

void shiftNeg(int arr[], int n){
    int j = 0;              //j refers (pointer) memory block where can store the neg num

    for(int i=0; i<n; i++){
        if(arr[i] < 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[] = {1,5,0,-23,9,-12,-1};
    int n = 7;

    shiftNeg(arr,n);

    //print
    cout << "Printing the array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}