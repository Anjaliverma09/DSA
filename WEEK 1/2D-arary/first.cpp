#include <iostream>
using namespace std;

void print(int arr[3][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";                 
        }
        cout << endl;
    }    
}

void print2(int arr[3][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout << arr[j][i] << " ";                 
        }
        cout << endl;
    }    
}

int main(){
    int arr[][4] = {               //you should atleast initialize column 
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int row = 3;
    int col = 4;
    print(arr, row, col);         //row wise printing
    print2(arr, row, col);        // column wise printing  

    return 0;
}