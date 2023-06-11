#include <bits/stdc++.h>
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  long long sum=0;
  int n=arr.size();
  map<long long,int> mp;
  int mxans=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum==0)mxans=max(mxans,i+1);
    if(mp.find(sum)!=mp.end())
      mxans=max(mxans,i-mp[sum]);
    else mp[sum]=i;
  }
  return mxans;

}
