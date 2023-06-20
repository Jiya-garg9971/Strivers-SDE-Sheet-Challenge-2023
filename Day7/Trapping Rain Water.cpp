#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    vector<long> prev(n,0),next(n,0);
    long mn=INT_MIN;
    for(int i=0;i<n;i++){
        prev[i]=max(mn,arr[i]);
        mn=prev[i];
    }
    mn=INT_MIN;
    for(int i=n-1;i>=0;i--){
        next[i]=max(mn,arr[i]);
        mn=next[i];
    }
    long sum=0;
    for(int i=0;i<n;i++){
        long t=min(prev[i],next[i]);
        sum+=(t>arr[i])?(t-arr[i]):0;
    }
    return sum;


}
