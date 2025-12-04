#include <iostream>
#include <vector>
using namespace std;
//2D array into 1D

int main() {
    vector<vector<int>> arr(3, vector<int>(4));   //3->row, 4->col
    int value = 2;
    int row = arr.size();
    int col = arr[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = value;
            value += 2;
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Before conversion " << "Row: " << row << " col: " << col << endl; 

    int n = row*col;

    int s=0, e=n-1;
    int mid = (s+e)/2;
    int rowIndex = mid/col;
    int colIndex = mid%col;

    cout << "After" << "Row: " << rowIndex << " Col: " << colIndex << endl;

    int matrix[rowIndex][colIndex];
    
}
