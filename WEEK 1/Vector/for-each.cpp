#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>vec){
    cout << "elements are: ";
    for(auto it:vec){
        cout << it << " ";
    }
    cout << endl;
}    

int main(){
    vector<int>vec;
    
    vec.push_back(10);
    vec.push_back(20); 
    vec.push_back(30);  

    print(vec);
}