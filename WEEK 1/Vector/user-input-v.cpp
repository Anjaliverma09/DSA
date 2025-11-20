#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    for(int i=0; i<size; i++){
        // cout << v[i] << endl; 
    }
}

int main(){
    vector<int>v;

    while(1){
        int s;
        cin >> s;
        v.push_back(s);
        cout << "size: " << v.size() << " " << "capacity: " << v.capacity() << endl;
        print(v);
    }

    //insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
   
}