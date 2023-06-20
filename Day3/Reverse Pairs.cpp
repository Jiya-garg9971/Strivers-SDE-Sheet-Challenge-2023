#include <bits/stdc++.h> 
int mergesort(int st,int end,vector<int> &arr){
	int temp[3001];
	int mid=st+(end-st)/2;
	int i=st,j=mid+1;
	int k=st;
	int cnt=0;
	while(i<=mid && j<=end){
		if(arr[i]<=2*arr[j]){
			i++;
		}
		else {
			cnt+=mid-i+1;
			j++;
		}
	}
	sort(arr.begin()+st,arr.begin()+end+1);
	return cnt;
}
int merge(vector<int>&arr,int st,int end){
	if(st>=end)return 0;
	int cnt=0;
	int mid=st+(end-st)/2;
	cnt+=merge(arr,st,mid);
	cnt+=merge(arr,mid+1,end);
	cnt+=mergesort(st,end,arr);
	return cnt;
}
int reversePairs(vector<int> &arr, int n){
		//  using merge sort algorithm
	return merge(arr,0,n-1);
	
}
