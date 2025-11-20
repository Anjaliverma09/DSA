#include <iostream>
#include <vector>
using namespace std; 

int main(){
    vector<int>vec;
    
    vec.push_back(0); //0
    vec.push_back(1); // 1*1 
    vec.push_back(2); //capacity |0|1|2| |
    vec.push_back(3); // |0|1|2|3|
    vec.push_back(4); // |0|1|2|3|4| | | |

    //agr memory mai space ni hota to double size ka hojata h vector 

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}