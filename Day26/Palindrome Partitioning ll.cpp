#include <bits/stdc++.h> 
int helper(string &s,int i,vector<vector<int>> &ispalindrome,vector<int> &rec){
    if(i==s.length())return -1;
    if(rec[i]!=-2)return rec[i];
    int mn=INT_MAX;
    for(int idx=i;idx<s.length();idx++){
        if(ispalindrome[i][idx])mn=min(mn,1+helper(s,idx+1,ispalindrome,rec));
    }
    return rec[i]=mn;
}
int palindromePartitioning(string str) {
    // Write your code here
    int n = str.length();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int len = 0; len < n; len++) {
        for (int i = 0; i < n; i++) {
            if (i + len >= n) continue;
            if (len == 0) {
                dp[i][i + len] = 1;
                continue;
            }
            if (len == 1) {
                dp[i][i + len] = (str[i] == str[i +1])?1:0;
                continue;
            }
            if (str[i] == str[i + len])
                dp[i][i + len] = dp[i + 1][i + len-1];
            else
                dp[i][i + len] = 0;
        }
    }
    vector<int> rec(n+1,-2);
    return helper(str,0,dp,rec);
}
