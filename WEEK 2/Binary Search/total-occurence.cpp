#include <iostream>
using namespace std;
//Find Total occurence of the target
//Time complexity: O(n)

int totalOcc(int a[], int n, int target){
    int count = 0;
    int i = 0;
    
    while(i < n){               
        if(a[i] == 30){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    int arr[] = {10,20,30,30,30,40,50};
    int n = 7;
    int target = 30;
    
    cout << totalOcc(arr, n, target);
}