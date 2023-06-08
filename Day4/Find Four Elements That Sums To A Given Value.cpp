#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int s=target-arr[i]-arr[j];
            int st=j+1,end=n-1;
            while(st<end){
                if(arr[st]+arr[end]==s){
                    return "Yes";
                    end--;
                    
                }
                else if(arr[st]+arr[end]<s)st++;
                else end--;
            }
        }
    }
    return "No";
}
