#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    cout << "elements are: ";
    for(int i=0; i<size; i++){
        //cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
    vector<int>v;
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }

    for(int i=0; i<10; i++){
        v.push_back(80);
    }
    print(v);

    //clear all elements of array
    v.clear();
    v.push_back(50);

    print(v);
}