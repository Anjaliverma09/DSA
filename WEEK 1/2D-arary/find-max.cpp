#include <iostream>
#include <limits.h>
using namespace std;

int printMax(int arr[][4], int row, int col){
    int maxAns = INT_MIN;                             //pre-define INT_MIN the smallests possible integer
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maxAns){
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int printMin(int arr[][4], int row, int col){
    int minAns = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] < minAns){
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

int main(){
    int arr[][4] = {                
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}
                    };
    
    int row = 3;
    int col = 4;
    
    cout << "Printing maximum number: " << printMax(arr, row, col) << endl;
    cout << "Printing minimum number: " << printMin(arr, row, col) << endl;
}