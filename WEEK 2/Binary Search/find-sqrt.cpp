#include <iostream>
using namespace std;

int squareRoot(int x){
    int s = 0; int e = x;
    int mid = (s+e)/2;
    int ans = -1;

    while(s <= e){
        //mid hi to answer ni h
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid < x){
            //store ans
            //go to right
            ans = mid;
            s = mid + 1;
        }
        else{
        //go to left
        e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    int x = 68; 
    
    cout << "Square root is: " << squareRoot(x);
}