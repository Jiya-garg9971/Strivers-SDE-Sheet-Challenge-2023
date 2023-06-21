#include <bits/stdc++.h> 
long long helper(int n,long long mid,vector<int> &time){	
	long long sum=0;
	long long day=1;
	for(int i=0;i<time.size();i++){
		if(time[i]>mid)return -1;
		sum+=time[i];
		if(sum>mid){sum=time[i];day++;}
	}
	return day;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
	long long st=1,end=1e9*n;
	long long ans=-1;
	while(st<=end){
		long long mid=(st+end)/2;
		long long days=helper(m,mid,time);
		if(days!=-1 and days<=n)ans=mid;
		if(days==-1 || days>n)st=mid+1;
		else end=mid-1;
	}
	return ans;

}
