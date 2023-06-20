#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	vector<int> ans;
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(pq.size()>=k){
				if(pq.top()<a[i]+b[j]){pq.pop();pq.push(a[i]+b[j]);}
			}
			else
				pq.push(a[i]+b[j]);
		}
	}
	while(!pq.empty()){
		ans.push_back(pq.top());
		pq.pop();
	}
	sort(ans.begin(),ans.end(),greater<int>());
	return ans;
}
