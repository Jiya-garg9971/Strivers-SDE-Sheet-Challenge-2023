#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> v={1,2,5,10,20,50,100,500,1000};
    int c=0;
    while(amount>0){
        int idx=upper_bound(v.begin(),v.end(),amount)-v.begin()-1;
        amount-=v[idx];
        c++;
    }
    return c;
}
