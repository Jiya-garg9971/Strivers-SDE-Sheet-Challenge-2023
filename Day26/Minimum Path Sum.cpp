#include <bits/stdc++.h> 
int helper(vector<vector<int>> &grid,int i,int j,vector<vector<int>> &dp){
    if(i==grid.size()-1 and j==grid[0].size()-1){return grid[i][j];}
    if(i==grid.size()-1){return grid[i][j]+helper(grid,i,j+1,dp);}
    if(j==grid[0].size()-1){return grid[i][j]+helper(grid,i+1,j,dp);}
    if(dp[i][j]!=0)return dp[i][j];
    int dx[]={0,1};
    int dy[]={1,0};
    int ans=INT_MAX;
    for(int k=0;k<2;k++){
        ans=min(ans,grid[i][j]+helper(grid,i+dx[k],j+dy[k],dp));
    }
    return dp[i][j]=ans;
}
int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int n=grid.size();
    int m=grid[0].size();
vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    return helper(grid,0,0,dp);
}
