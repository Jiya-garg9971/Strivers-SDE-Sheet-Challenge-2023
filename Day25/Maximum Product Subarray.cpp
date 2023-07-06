#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	long long mx=INT_MIN;
	long long prod=1;
	for(int i=0;i<n;i++){
		prod*=arr[i];
		mx=max(mx,prod);
		if(prod==0)prod=1;
	}
	prod=1;
	for(int i=n-1;i>=0;i--){
		prod*=arr[i];
		mx=max(mx,prod);
		if(prod==0)prod=1;
	}
	return mx;
}
