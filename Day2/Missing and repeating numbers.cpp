#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int> visit(n+1,0);
	for(auto i:arr)visit[i]++;
	int rep=0,mis=0;
	for(int i=1;i<=n;i++){
		if(visit[i]==0)mis=i;
		if(visit[i]>1)rep=i;
	}
	return {mis,rep};
	
}
