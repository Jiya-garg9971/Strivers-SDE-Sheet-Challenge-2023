#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    map<int,int> mp;
    int n=arr.size();
	for(int i=0;i<n;i++)mp[arr[i]]++;
	int mx=0;
    vector<int> ans;
	for(auto i:mp){
		if(i.second>n/3)ans.push_back(i.first);
	}
	return ans;

}
