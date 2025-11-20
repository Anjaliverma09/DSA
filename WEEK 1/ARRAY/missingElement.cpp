#include<iostream>
using namespace std;
//Finding missing element in array:

int main(){
    int arr[] = {1,5,7,3,8,6,2};
    int n = 8;                          //total elements are 8 & 1 missing element

    int sum = 0;
    for(int i=0; i<7; i++){
        sum += arr[i];
    }

    int totalSum = ((n) * (n+1))/2;         //n natural no. sum formula (arithemetic mean)
    int ans = totalSum - sum;

    cout << "Missing element is: " << ans;
}