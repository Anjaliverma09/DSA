#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char>v;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');

    cout << "front element: " << v[0] << endl;
//or 
    cout << "front element: " << v.front() << endl;

    cout << "end element: " << v[v.size()-1] << endl;
//or 
    cout << "end element: " << v.back() << endl;     
}