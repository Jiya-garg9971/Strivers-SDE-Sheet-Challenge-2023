#include <bits/stdc++.h>
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* ans=new Node<int>(0);
    Node<int>* res=ans;
    while(first and second){
        if(first->data < second->data){
            res->next=new Node<int>(first->data);
            first=first->next;
        }
        else{
            res->next=new Node<int>(second->data);
            second=second->next;
        }
        res=res->next;            
    }
    while(first){
        res->next=new Node<int>(first->data);
        first=first->next;
        res=res->next; 
    }
    while(second){
        res->next=new Node<int>(second->data);
        second=second->next;
        res=res->next; 
    }
    return ans->next;


}
