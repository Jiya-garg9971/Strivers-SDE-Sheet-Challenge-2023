#include<vector>
string longestPalinSubstring(string str)
{
    // Write your code here.
   int n = str.length();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    int ans = 0;
    int st = 0;
    for (int len = 0; len < n; len++) {
        for (int i = 0; i < n; i++) {
            if (i + len >= n) continue;
            if (len == 0) {
                dp[i][i + len] = 1;
                continue;
            }
            if (len == 1) {
                dp[i][i + len] = (str[i] == str[i +1])?1:0;
                if (str[i] == str[i + len] and ans<len){
                    ans=1;
                    st = i;}
                continue;
            }
            if (str[i] == str[i + len])
                dp[i][i + len] = dp[i + 1][i + len-1];
            else
                dp[i][i + len] = 0;
            if (dp[i][i + len]) {
                if (ans < len) {
                    ans = len;
                    st = i;
                }
            }
        }
    }
    // for(auto i:dp){
    //     for(auto j:i)cout<<j;
    //     cout<<endl;
    // }
    // cout<<ans<<endl;
    return str.substr(st, ans + 1);
}
// abccbc
//100000
//010000
//001100 
//000100 
//000010 
//000001 
