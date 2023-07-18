#include<unordered_map>
class LRUCache
{
public:
class Node{
        public:
        int key;int value;
        Node* next;Node* prev;
        Node(int a,int b){
            key=a;value=b;
        }
    };
    int cap;
    unordered_map<int,Node*> mp;    
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    void addNode(int &key,int &value){
        Node* newnode=new Node(key,value);
        Node* temp=head->next;
        newnode->next=temp;
        head->next=newnode;
        temp->prev=newnode;
        newnode->prev=head;
    }
    void deleteNode(Node * &node){
        Node* temp=node->next;
        node->prev->next=node->next;
        node->next->prev=node->prev;
        return ;
    }
    LRUCache(int capacity)
    {
        // Write your code here
         cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

    int get(int key)
    {
        // Write your code here
         if(mp.find(key)!=mp.end()){
            Node* a=mp[key];
            int data=a->value;
            deleteNode(a);
            addNode(key,data);
            mp[key]=head->next;
            return data;
        }
        return -1;
    }

    void put(int key, int value)
    {
        // Write your code here
        if(mp.find(key)!=mp.end()){
            Node* s=mp[key];
            deleteNode(s);
            addNode(key,value);
            mp[key]=head->next;
            return ;
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
         addNode(key,value);
            mp[key]=head->next;
            return;            
    }
};
