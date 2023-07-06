
int helper(string &a,string &b,int i ,int j,vector<vector<int>> &dp){
    if(j==b.length())return a.length()-i;
    if(i==a.length())return b.length()-j;
    if(dp[i][j])return dp[i][j];
    if(a[i]==b[j])return helper(a,b,i+1,j+1,dp);
    int op1=1+ helper(a,b,i+1,j+1,dp);
    int op2=1+helper(a,b,i+1,j,dp);
    int op3=1+ helper(a,b,i,j+1,dp);
    return dp[i][j]=min(op1,min(op3,op2));
}
int editDistance(string str1, string str2)
{
    //write you code here
    int n=str1.length();
    int m=str2.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    return helper(str1,str2,0,0,dp);
}
