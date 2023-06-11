#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int> mp;
    int sum=0;
    int xcur=0;
    mp[0]++;
    for(auto i:arr){
        xcur=xcur^i;
        sum+=mp[x^xcur];
        mp[xcur]++;
    }
    return sum;
}
