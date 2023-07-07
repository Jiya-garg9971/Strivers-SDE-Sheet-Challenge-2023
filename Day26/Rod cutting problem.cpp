int helper(vector<int> &price, int n,vector<int> &dp){
	if(n==0)return 0;
	if(dp[n]!=0)return dp[n];
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,price[i]+helper(price,n-i-1,dp));
	}
	return dp[n]=ans;
	
}
int cutRod(vector<int> &price, int n)
{
	vector<int> dp(n+1,0);
	return helper(price,n,dp);
}
