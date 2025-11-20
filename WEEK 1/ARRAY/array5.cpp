#include <iostream>
using namespace std;

int unique(int a[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^a[i];
    }
    return ans;
}

//finding unique element in array
int main(){
    int a[] = {2,4,6,8,5,2,4,6,8};
    int n = 9;

        int finalAns = unique(a, n);
        cout << "Final ans is: " << finalAns;

}