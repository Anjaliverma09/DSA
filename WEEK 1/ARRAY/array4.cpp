#include <iostream>
using namespace std;

int main(){
    int a[4] = {2,4,6,8};
    int target = 8;

    for(int i=0; i<4; i++){
        if(a[i] == target){
            cout << "found element: " << endl;
            break;
        }
        else{
            cout << "element not found" << endl;
        }
    }
    return 0;
}