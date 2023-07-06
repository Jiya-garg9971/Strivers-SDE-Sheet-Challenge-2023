#include<vector>
int helper(string a,string b,int i,int j,vector<vector<int>> &dp){
	if(i==a.length() || j==b.length())return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	if(a[i]==b[j])return 1+helper(a,b,i+1,j+1,dp);
	return dp[i][j]= max(helper(a,b,i+1,j,dp),helper(a,b,i,j+1,dp));
}
int lcs(string s, string t)
{
	//Write your code here
	int n=s.length(),m=t.length();
	vector<vector<int>> dp(n,vector<int>(m,-1));
	return helper(s,t,0,0,dp);
}
