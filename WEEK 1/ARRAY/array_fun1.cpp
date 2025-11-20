#include<iostream>
using namespace std;

bool linearSearch(int a[], int size, int target){
    for(int i=0; i<size; i++){
        if(a[i] == target){
            return true;
        }    
    }
    return false;
}

int main(){
    int a[5] = {2,4,6,8,10};
    int size = 5; 
    int target = 4;
    bool ans = linearSearch(a, size, target);


    if(ans == 1){
        cout << "target found";
    }
    else{
        cout<< "target not found";
    }

}