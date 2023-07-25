#include <bits/stdc++.h> 
int helper(vector<int> positions,int mid){
	int cnt=1;
	int prev=positions[0];
	for(int i=1;i<positions.size();i++){
		if(positions[i]-prev>=mid){
			cnt++;
			prev=positions[i];
		}
	}
	return cnt;

}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(),positions.end());
	int st=0,end=1e9;
	while(st<=end){
		int mid=(st+end)/2;
		if(helper(positions,mid)>=c){
			st=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return st-1;

}
