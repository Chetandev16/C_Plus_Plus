#include<bits/stdc++.h>

int solve(vector<int> &heights, int index, vector<int> &dp){
    if(index == 0) return 0;
    if(dp[index] != -1) return dp[index];
    int left = solve(heights,index - 1,dp) + abs(heights[index] - heights[index - 1]);
    int right = INT_MAX;
    
    if(index > 1) right = solve(heights,index - 2,dp) + abs(heights[index] - heights[index - 2]);
    
    return dp[index] = min(left,right);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int> dp(n+1 , -1);
    
    return solve(heights,n-1,dp);
    
}