#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long>> ans;
  if(n>0)ans.push_back({1});
  if(n>1)ans.push_back({1,1});
  for(int i=2;i<n;i++){
    vector<long long> v;
    v.push_back(1);
    for(int j=1;j<i;j++){
      v.push_back(ans[i-1][j]+ans[i-1][j-1]);
    }
     v.push_back(1);
     ans.push_back(v);
  }
  return ans;
}
