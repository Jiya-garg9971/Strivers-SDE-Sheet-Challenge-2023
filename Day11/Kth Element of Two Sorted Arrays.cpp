#define pp pair<int,pair<int,int>> 
#include<queue>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
   //using binary search
    if(n>m)return ninjaAndLadoos(row2,row1,n,m,k);
   int lo=max(0,k-n),hi=min(k,m);
   int prev1=-1e6,prev2=-1e6,next1=1e6,next2=1e6;
   while(lo<=hi){
        int mid=(lo+hi)/2;
        int rem=k-mid;
        prev1=(mid>0)?row1[mid-1]:-1e6;
        prev2=(rem>0)?row2[rem-1]:-1e6;
        next1=(mid<m)?row1[mid]:1e6;
        next2=(rem<n)?row2[rem]:1e6;
        // cout<<mid<<","<<prev1<<","<<prev2<<","<<next1<<","<<next2<<endl;
        if(prev1<=next2 and prev2<=next1){
            return max(prev1,prev2);
        }
        if(prev1>next2){
            hi=mid-1;
        }
        else lo=mid+1;
   }
   return 1;
   
}
