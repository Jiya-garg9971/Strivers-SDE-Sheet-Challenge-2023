#include <bits/stdc++.h> 
class Queue {
public:
    int cs=0;
    int total=0;
    list<int> v;
    Queue() {
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return total==0;
    }

    void enqueue(int data) {
        v.push_back(data);
        cs++;
        total++;
    }

    int dequeue() {
        if(isEmpty())return -1;
        int a=v.front();
        v.pop_front();
        total--;
        return a;

    }

    int front() {
        if(isEmpty())return -1;
        int a=v.front();
        return a;
    }
};
