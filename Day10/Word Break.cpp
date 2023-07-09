#include <bits/stdc++.h> 
bool helper(vector < string > & arr,vector<int> &dp, string & target,int i){
    if(i==target.length())return 1;
    if(dp[i]!=-1)return dp[i];
    bool ans=false;
    for(auto j:arr){
        if(j==target.substr(i,j.length()))
        ans=ans || helper(arr,dp,target,i+j.length());
    }
    return dp[i]=ans;
}
bool wordBreak(vector < string > & arr, int n, string & target) {
    // Write your code here.
    int m=target.length();
    vector<int> dp(m,-1);
    return helper(arr,dp,target,0);
}
