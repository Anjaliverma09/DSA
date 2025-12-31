#include <iostream>
#include <vector>
using namespace std;
//Using method Top-Down (Memoisation)

int solveUisngMem(int n, vector<int>& dp){
    if(n == 0 || n == 1) return n;

    if(dp[n] != -1) return dp[n];

    dp[n] = solveUisngMem((n-1), dp) + solveUisngMem((n-2), dp);
    return dp[n];
}

int fib(int n){
    vector<int> dp(n+1, -1);        //size(0-n), initialization
    
    int ans = solveUisngMem(n, dp);
    for(auto i: dp) cout << i << " ";
    return ans;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
}