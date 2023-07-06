#include <bits/stdc++.h> 
#include<bits/stdc++.h>
int helper(vector<int> &arr,int i,int n,vector<vector<int>> &dp,int prev){
    if(i==n)return 0;
    if(dp[prev+1][i]!=-1)return dp[prev+1][i];
    int take=0;
    int ntake=helper(arr,i+1,n,dp,prev);
    if(prev==-1 || arr[i]>arr[prev])
    take=arr[i]+helper(arr,i+1,n,dp,i);
    return dp[prev+1][i]=max(take,ntake);

}
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	// Write your code here
	vector<vector<int>> dp(1+n,vector<int>(n+1,-1));
    return helper(rack,0,n,dp,-1);
}
