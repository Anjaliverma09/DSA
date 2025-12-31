#include <iostream>
#include <vector>
using namespace std;
//T.m: O(n2)

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

// void insertionSort(vector<int> &v){
//     int n = v.size();
//     for(int i=1; i<n; i++){
//         int temp = v[i];
//         int j=i-1;
//         for(; j>=0; j--){
//             if(v[j] > temp)
//                 v[j+1] = v[j];
//             else break;
//         }    
//         v[j+1] = temp;
//     }
// }

void insertionSort(vector<int> &v){
    int n = v.size();
    for(int i=0; i<n; i++){
        int temp = v[i];
        int j = i-1;

        while(j >= 0 && v[j] > temp){
            v[j+1] = v[j];
            j--;
    } 
        v[j+1] = temp;
    }
}

int main(){
    vector<int> v = {5, 4, 3, 2, 1};
    insertionSort(v);
    print(v);

    return 0;
}