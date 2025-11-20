#include<iostream>
using namespace std;

int main(){
int arr[5];
int n = 5;

//adress cal: arr[i] = value at(base add + (datatype size * index))
for(int i=0; i<n; i++){
    cout << "Enter the element of index " << i << ": ";
    cin >> arr[i];
}

cout << "array element is: " << endl;
for(int i=0; i<n; i++){
    cout << arr[i] << " ";
}

return 0;
}
