#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int & k = n;  //reference variabale
    int & c = n;  //reference variabale

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    k++;
    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    //output: k is nothing just n and c nickname
}