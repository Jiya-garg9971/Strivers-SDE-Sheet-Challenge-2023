#include <bits/stdc++.h> 
// write merge sort algorithm
long long mergeSort(long long *arr,int st,int end,int mid){
    
vector<long long> temp;
    int i=st,j=mid+1;
    int k=st;
    long long cnt=0;
    while(i<=mid and j<=end){
        if(arr[i]<=arr[j])temp.push_back(arr[i++]);
        else{
            cnt+=(mid-i+1);
            temp.push_back(arr[j++]);
        }
    }
    
    while(i<=mid)temp.push_back(arr[i++]);
    while(j<=end)temp.push_back(arr[j++]);
    for(int i=0;i<temp.size();i++){
        arr[i+st]=temp[i];
    }
    return cnt;
}
long long helper(long long *arr,int st,int end){
    if(st>=end)return 0;
    int mid=(st+end)/2;
    long long x=helper(arr,st,mid);
     long long y=helper(arr,mid+1,end);
     long long z=mergeSort(arr, st,end,mid);
    return x+y+z;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return helper(arr,0,n-1);

}
