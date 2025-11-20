#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>vec={};
    cout<<"size is: " << vec.size() << endl;

    //Adding values in vector
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<<"After push back size is: " << vec.size() << endl;

    //Deleting values in vector 
    // vec.pop_back();
    // vec.pop_back();
    
    //  for(int val : vec){
    //     cout << val << endl;
    //  }

    // cout << vec.front() << endl; //returns first value
    //cout << vec.back() << endl; //returns end value

    cout << vec.at(0) << endl; //indexing like vec={0} 
    return 0;
}