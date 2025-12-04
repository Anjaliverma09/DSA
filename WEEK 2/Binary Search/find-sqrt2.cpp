#include <iostream>
using namespace std;

long long squareRoot(long long x){
    long long ans = 0;
    for(long long i = 1; i*i <= x; i++){
        ans = i;
    }
    return ans;
}

int main(){
    long long x = 68;
    cout << "Square root is: " << squareRoot(x);
    return 0;
}
