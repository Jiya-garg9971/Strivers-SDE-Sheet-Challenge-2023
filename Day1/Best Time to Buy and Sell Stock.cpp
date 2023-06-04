#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mx=0;
    int mn=INT_MAX;
    int n=prices.size();
    for(int i=0;i<n;i++){
        mx=max(mx,prices[i]-mn);
        mn=min(mn,prices[i]);
    }
    return mx;
}
