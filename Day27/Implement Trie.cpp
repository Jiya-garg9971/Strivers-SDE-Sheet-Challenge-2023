/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
#include<unordered_map>
class Node{
    public:
    char a;
    Node* next;
    bool isterminal;
    unordered_map<char,Node*> child;
    Node(char c){
        a=c;
        isterminal=false;
    }
};
class Trie {

public:
    Node* root;
    /** Initialize your data structure here. */
    Trie() {
        root=new Node('\0');
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Node* temp=root;
        for(auto i:word){
            if(temp->child.count(i))temp=temp->child[i];
            else {
                temp->child[i]=new Node(i);
                temp=temp->child[i];
            }
        }
        temp->isterminal=true;
        return ;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
          Node* temp=root;
        for(auto i:word){
            if(temp->child.count(i))temp=temp->child[i];
            else {
               return false;
            }
        }
        return temp->isterminal;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
         Node* temp=root;
        for(auto i:prefix){
            if(temp->child.count(i))temp=temp->child[i];
            else {
               return false;
            }
        }
        return true;
    
    }
};
