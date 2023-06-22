#include<stack>
class Queue {
    // Define the data members(if any) here.
    stack<int> st1,st2;
    public:
    Queue() {

    }

    void enQueue(int val) {
        st1.push(val);
        return;
    }

    int deQueue() {
        if(isEmpty())return -1;
        while(st1.size()>1){st2.push(st1.top());st1.pop();}
        int a=st1.top();st1.pop();
        while(st2.size()){
            st1.push(st2.top());
            st2.pop();
        }
        return a;
    }

    int peek() {
         if(isEmpty())return -1;
        while(st1.size()>1){st2.push(st1.top());st1.pop();}
        int a=st1.top();
        while(st2.size()){
            st1.push(st2.top());
            st2.pop();
        }
        return a;
        // Implement the peek() function here.
    }

    bool isEmpty() {
        return st1.size()+st2.size()==0;
        // Implement the isEmpty() function here.
    }
};
