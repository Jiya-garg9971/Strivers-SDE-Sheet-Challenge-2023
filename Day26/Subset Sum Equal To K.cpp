#include <bits/stdc++.h> 
bool helper(int n,int k,vector<int> &arr,int i,vector<vector<int>> &dp){
    if(k==0)return true;
    if(i==n)return false;
    if(dp[k][i]!=-1)return dp[k][i];
    bool take=false;
    bool ntake=helper(n,k,arr,i+1,dp);
    if(arr[i]<=k){
        take=helper(n,k-arr[i],arr,i+1,dp);
    }
    return dp[k][i]=take || ntake;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(k+1,vector<int> (n,-1));
    return helper(n,k,arr,0,dp);
}
