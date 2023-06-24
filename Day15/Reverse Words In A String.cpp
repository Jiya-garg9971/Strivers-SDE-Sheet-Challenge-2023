#include<stack>
string reverseString(string &str){
	// Write your code here.
	string ans="";
	stack<string> st;
	string temp="";
	for(auto i:str){
		if(i==' '){
			if(temp!="")st.push(temp);
			temp="";
		}
		else {
			temp+=i;
		}
	}	
	if(temp!="")st.push(temp);
	if(st.empty())return "";
	while(st.size()>1){
		ans+=st.top()+" ";
		st.pop();
	}
	ans+=st.top();
	return ans;
}
