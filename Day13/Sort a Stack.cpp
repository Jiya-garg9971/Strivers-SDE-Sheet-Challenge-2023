#include <bits/stdc++.h> 
void insertAtpos(int a,stack<int> &st){
	if(st.empty() || st.top()<a){
		st.push(a);return ;
	}
	int x=st.top();
	st.pop();
	insertAtpos(a,st);
	st.push(x);
}
void sortStack(stack<int> &st)
{
	// Write your code here
	if(st.empty())return ;
	int a=st.top();st.pop();
	sortStack(st);
	insertAtpos(a,st);
}
