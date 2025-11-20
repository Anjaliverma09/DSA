#include <iostream>
using namespace std;

void matrix(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
           swap(arr[i][j], arr[j][i]);
        }
    }    
}

void printArr(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}            

int main(){
    int arr[][4] = {
                    {1,2,3,10},
                    {4,5,6,20},
                    {7,8,9,30},
                    {11,12,13,40}
                    };
    int row = 4;
    int col = 4;
    
    matrix(arr, row, col);
    printArr(arr, row, col);     //printing trasnpose of array

    return 0;
}