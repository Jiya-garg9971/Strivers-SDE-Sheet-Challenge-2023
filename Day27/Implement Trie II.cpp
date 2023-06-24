#include <bits/stdc++.h> 
class Node{
    public:
    char a;
    Node* next;
    int isterminal;
    int cnt;
    unordered_map<char,Node*> child;
    Node(char c){
        a=c;
        c=1;
        isterminal=0;
    }
};
class Trie{

    public:

    Node* root;
    /** Initialize your data structure here. */
    Trie() {
        root=new Node('\0');
    }

    void insert(string &word){
        // Write your code here.
        Node* temp=root;
        for(auto i:word){
            if(temp->child.count(i))temp=temp->child[i];
            else {
                temp->child[i]=new Node(i);
                temp=temp->child[i];
            }
            temp->cnt+=1;
        }
        temp->isterminal+=1;
        return ;
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
         Node* temp=root;
        for(auto i:word){
            if(temp->child.count(i))temp=temp->child[i];
            else {
               return 0;
            }
        }
        return temp->isterminal;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
         Node* temp=root;
        for(auto i:word){
            if(temp->child.count(i))temp=temp->child[i];
            else {
               return 0;
            }
        }
        return temp->cnt;
    }

    void erase(string &word){
        // Write your code here.
        Node* temp=root;
        for(auto i:word){
            temp=temp->child[i];
            temp->cnt-=1;
        }
        temp->isterminal-=1;
    }
};
