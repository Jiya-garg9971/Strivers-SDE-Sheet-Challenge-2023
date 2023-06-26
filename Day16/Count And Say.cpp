#include <bits/stdc++.h> 
string writeAsYouSpeak(int n) 
{
	// Write your code here.
	string ans="1";
	while(n>1){
		string s="";
		int cnt=1;
		int i=1;
		for(;i<ans.length();i++){
			if(ans[i]==ans[i-1]){
				cnt++;
			}
			else {
				s+=to_string(cnt)+ans[i-1];
				cnt=1;
			}
		}
		s+=to_string(cnt)+ans[i-1];
		ans=s;
		n--;
	}
	return ans;
}
