#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int mx;int cs=-1;
    vector<int> v;
public:
    
    Stack(int capacity) {
        mx=capacity;
    }

    void push(int num) {
        if(cs>=mx-1)return;
        v.push_back(num);
        cs++;
        return ;
    }

    int pop() {
        if(isEmpty())return -1;
        int a=v[cs];
        v.pop_back();cs--;
        return a;
    }
    
    int top() {
         if(isEmpty())return -1;
        return v[cs];
    }
    
    int isEmpty() {
        return cs==-1;
    }
    
    int isFull() {
        return cs>=mx-1;
    }
    
};
