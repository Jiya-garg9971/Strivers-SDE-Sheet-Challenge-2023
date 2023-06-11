#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    int n=input.length();
    int j=0;
    int ans=0;
    vector<int> mp(26,-1);
    for(int i=0;i<n;i++){
        while(j<=mp[input[i]-'a'])j++;
        mp[input[i]-'a']=i;
        ans=max(ans,i-j+1);
    }
    return ans;
}
