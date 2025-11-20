#include <iostream>
using namespace std;

int revDiagonalSum(int arr[][3], int row, int col){
    int sum = 0;
    for(int i=0; i<row; i++){
        int j = col - 1 - i;
            sum += arr[i][j];
    }
    cout << "Reverse Diagonal Sum: " << sum << endl;
}

int main(){
    int arr[][3] = {
                    {1,1,1},
                    {2,2,2},
                    {3,3,3}
                    };
  
    int row = 3;
    int col = 3;

    revDiagonalSum(arr, row, col);
    }    