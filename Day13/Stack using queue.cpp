#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
    queue<int> q1,q2;
   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return q1.size()+q2.size();
    }

    bool isEmpty() {
        return getSize()==0;
    }

    void push(int element) {
        q1.push(element);
    }

    int pop() {
        if(getSize()==0)return -1;
        while(q1.size()>1){
            q2.push(q1.front());q1.pop();
        }
        int a=q1.front();q1.pop();
        while(q2.size()){
            q1.push(q2.front());q2.pop();
        }
        return a;
    }

    int top() {
        if(getSize()==0)return -1;
        while(q1.size()>1){
            q2.push(q1.front());q1.pop();
        }
        int a=q1.front();
        q1.pop();
        
        while(q2.size()){
            q1.push(q2.front());q2.pop();
        }
        q1.push(a);
        return a;

    }
};
