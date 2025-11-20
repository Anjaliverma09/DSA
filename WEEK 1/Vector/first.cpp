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
    //vector initialization
    vector<int>vec;              //initialize with 0 size, no data

    vector<int>vec2(5, -2);      //with n size and specific element

    vector<int>vec3 = {2,4,6,8}; 
    vec3.push_back(50);

    vector<int>vec4{2,4,6,8,10};
    vec4.push_back(60);

    // print(vec2);
    // print(vec3);
    // print(vec4);

    //copying vector into another vector
    vector<int>vec5 = {0,0,0,0,0,0};
    vector<int>vec6(vec5);
    print(vec6);
}