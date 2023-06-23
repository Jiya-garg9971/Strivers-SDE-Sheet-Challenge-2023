#include<bits/stdc++.h>

void nextSmallerElement(vector<int> &arr, int n,vector<int> &next)
{
    // Write your code here
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() and arr[st.top()]>=arr[i])st.pop();
        if(!st.empty())next[i]=st.top();
        st.push(i);
    }
    return;
}
void prevSmallerElement(vector<int> &arr, int n,vector<int> &prev)
{
    // Write your code here
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() and arr[st.top()]>=arr[i])st.pop();
        if(!st.empty())prev[i]=st.top();
        st.push(i);
    }
    return;
}
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   int n=heights.size();
   vector <int > prev(n+1,-1),next(n+1,n);
   nextSmallerElement(heights,n,next);
   prevSmallerElement(heights,n,prev);
   int res=0;
   for(int i=0;i<n;i++){
     int dist=next[i]-prev[i]-1;
     int area=dist*heights[i];
    //  cout<<area<<" ";
     res=max(res,area);
   }
   return res;
 }
