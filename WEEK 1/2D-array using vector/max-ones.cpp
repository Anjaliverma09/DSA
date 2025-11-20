#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main(){
    vector<vector<int>> arr = {
        {1,0,0,0},
        {0,0,1,1},
        {1,0,1,1}
    };

    int row = 3; int col = 5;                
    int rowCount;
    int oneCount = INT_MIN;
    
    for(int i=0; i<arr.size(); i++){                    //Time complexity: O(n*m)
        int count = 0;
        for(int j=0; j<arr[i].size(); j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        //After completion of rows count, compare count with oneCount
        if(count > oneCount){
            oneCount = count;
            rowCount = i;
        }
    }

    cout << "Row with max 1's: " << rowCount << endl << "Max 1's is: " << oneCount;

}