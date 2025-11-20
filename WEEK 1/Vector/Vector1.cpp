#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vector<int> vec={2,4,6,8};
    //vector<int> vec(3,0);
    vector<char> vec={'a', 'b', 'c'};

    cout<<"size is: " << vec.size() << endl; //size function

    //for each loop
    for(char val : vec){
        cout << val << endl;
     }
    return 0;

}