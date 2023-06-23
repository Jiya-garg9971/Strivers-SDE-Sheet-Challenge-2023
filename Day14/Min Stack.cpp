#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> mnst,st;
	
	public:
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(!st.empty())mnst.push(min(num,mnst.top()));
			else mnst.push(num);
			st.push(num);			
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(st.empty())return -1;
			mnst.pop();
			int a=st.top();st.pop();
			return a;
			// Write your code here.
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty())return -1;
			int a=st.top();
			return a;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(mnst.empty())return -1;
			int a=mnst.top();
			return a;
			// Write your code here.
		}
};
