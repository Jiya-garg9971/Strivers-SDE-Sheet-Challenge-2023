#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	map<int,int> freq;
	for(auto i:arr)freq[i]++;
	for(auto i:freq){
		if(i.second>1)return i.first;
	}
	return -1;
}
