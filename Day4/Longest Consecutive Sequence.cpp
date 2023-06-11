#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    int mx=1;
    sort(arr.begin(),arr.end());
    map<int,int> mp;
    int c=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)c++;
        else if(arr[i]==arr[i-1]){}
        else c=1;
        mx=max(mx,c);
    }
    return mx;
}
