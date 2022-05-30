#include<bits/stdc++.h>

using namespace std;

int fib(int n, vector<int> &dp)
{
    if(n<=1)
        return n;

    if(dp[n] != -1){
        return dp[n];
    }
        
    return dp[n]=fib(n-1, dp)+fib(n-2, dp);
}
//dp tabulation

int fib(int n, vector<int> &dp)
{
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2;i<n;i++){
        dp[n] = dp[n-1]+dp[n-2];
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    for(int i=0;i<n;i++){
        cout<<fib(i, dp)<<" ";
    }
}