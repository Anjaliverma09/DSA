#include <iostream>
#include <vector>
using namespace std;
//Using method Bootom-up (Tabulation)

int solveUsingTabulation(int n){
    //1: create dp array
    vector<int> dp(n+1, -1);
    //2: analyse base case & fill dp array
    dp[0] = 0;  if(n == 0) return n;
    dp[1] = 1;
    //3: fill the remaining dp array
    for(int i=2; i<=n; i++)
        dp[i] = dp[i-1] + dp[i-2];

    return dp[n];
}

int fib(int n){
    int ans = solveUsingTabulation(n);
    return ans;
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci: (" << n << ") = " << fib(n);
}