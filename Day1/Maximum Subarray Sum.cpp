#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    //KADANE ALGORITHM
    long long sum=0;
    long long mx=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx=max(mx,sum);
        if(sum<0)sum=0;
    }
    return mx;
}
