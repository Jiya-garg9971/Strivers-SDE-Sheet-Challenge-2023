#include <bits/stdc++.h> 
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    int n=price.size();
    vector<int> ans(n,1);
    stack<int> st;
    st.push(-1);
    for(int i=0;i<n;i++){
        while(st.top()!=-1 and price[st.top()]<=price[i])st.pop();
        ans[i]=i-st.top();
        st.push(i);
    }
    return ans;
}
