#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   sort(arr.begin(),arr.end());
   int st=0,end=arr.size()-1;
   while(st<end){
      if(arr[st]+arr[end]==s){
         int a=arr[st],b=arr[end];
         int t=end;
         int m=st;
         while(m<end and arr[m]==a){
            ans.push_back({arr[m],b});
            m++;
         }
         end--;
          
      }
      else if(arr[st]+arr[end]<s)st++;
      else end--;
   }
   sort(ans.begin(),ans.end());
   return ans;
}
