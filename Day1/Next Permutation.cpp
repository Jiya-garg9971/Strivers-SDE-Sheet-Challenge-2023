#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int idx=n-1;
    int num=permutation[idx];
    idx--;
    while(idx>=0 and permutation[idx]>=num){
        num=max(num,permutation[idx]);
        idx--;
    }
    int idx2=-1;
    int mx=INT_MAX;
    for(int i=idx+1;i<n;i++){
        if(permutation[i]>permutation[idx] and permutation[i]<=mx){
            mx=permutation[i];
            idx2=i;
        }
    }
    if(idx>=0)swap(permutation[idx],permutation[idx2]);
    sort(permutation.begin()+idx+1,permutation.end());
    return permutation;
}
