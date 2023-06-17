#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-2;i++){
		if(i!=0 and arr[i]==arr[i-1]){continue;}
		int st=i+1,end=n-1;
		int target=K-arr[i];
		while(st<end){
			if(arr[st]+arr[end]==target){
				ans.push_back({arr[i],arr[st],arr[end]});
				while(st<end and arr[st]==arr[st+1])st++;
				while(st<end and arr[end]==arr[end-1])end--;
				end--;
			}
			else if(arr[st]+arr[end]<target)st++;
			else end--;
		}
	}
	return ans;
}
