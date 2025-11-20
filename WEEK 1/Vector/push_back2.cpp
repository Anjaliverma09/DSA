#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    cout << "elements are: ";
    for(int i=0; i<size; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int>v;

    //insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    print(v);

    //deleting vector from the end
    cout << "After pop ";
    v.pop_back();
    v.pop_back();
    print(v);
}