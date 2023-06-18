#include<map>
#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	sort(arr.begin(),arr.end());
	int c=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1])c++;
	}
	return c;
}
