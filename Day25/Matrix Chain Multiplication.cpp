#include <bits/stdc++.h> 

int matrixMultiplication(vector<int> &arr, int N)
{
    // Write your code here.
    vector<vector<long long>> dp(N+1,vector<long long>(N+1,1e9));
    for(int i=0;i<N;i++)dp[i][i]=0;
    for(int i=N-1;i>0;i--){
        for(int j=i+1;j<N;j++){
            for(int k=i;k<j;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+(arr[i-1]*arr[k]*arr[j]));
            }
        }
    }
    return dp[1][N-1];
}
