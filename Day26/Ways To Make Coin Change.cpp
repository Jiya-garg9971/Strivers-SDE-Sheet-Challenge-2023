#include<vector>
long helper(int *denominations,int n,int value,int coin,vector<vector<long>> &dp){
    if(value==0)return 1;
    if(coin==0)return value%denominations[coin]==0;
    if(dp[value][coin]!=-1)return dp[value][coin];
    long ntake=helper(denominations,n,value,coin-1,dp);
    long take=0;
    if(value>=denominations[coin])
    take=helper(denominations,n,value-denominations[coin],coin,dp);
    return dp[value][coin]=take+ntake;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<vector<long>> dp(value+1,vector<long>(n,-1));
    return helper(denominations,n,value,n-1,dp);
}
