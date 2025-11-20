#include <iostream>
using namespace std;

int rowSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum += arr[i][j]; 
        }
        cout << "Sum of " << i+1 << " row: " << sum << endl;
    }
}

int colSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int j=0; j<col; j++){   
        for(int i=0; i<row; i++)
        {
            sum += arr[i][j]; 
        }
        cout << "Sum of " << j+1 << " column: " << sum << endl;
    }
}

int diagonalSum(int arr[][4], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        sum += arr[i][i];
    }

    cout << "Diagonal Sum: " << sum << endl;
}

int main(){
    int arr[][4] = {
                    {1,1,1},
                    {2,2,2},
                    {3,3,3}
                    };

    int row = 3;
    int col = 4;
    
    rowSum(arr, row, col);
    colSum(arr, row, col);
    diagonalSum(arr, row, col);
}