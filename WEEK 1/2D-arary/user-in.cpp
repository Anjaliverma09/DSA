#include <iostream>
using namespace std;

int main(){
    int arr[3][4];
    int row = 3;
    int col = 4; 

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter the row index " << i << " Enter the col index " << j << endl;
            cin >> arr[i][j];
        }
    }

    return 0;


}