/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if (head == NULL ) {
        return head;
    }
     Node *temp=head;
    while(temp!=NULL){
        Node * s=new Node(temp->val);
        s->next=temp->next;
        temp->next=s;
        temp=s->next;
    }    
    Node *ptr=head;
    while(ptr!=NULL){
        if(ptr->random)ptr->next->random=ptr->random->next;
        ptr=ptr->next->next;
    }
    Node *original =head ;
    Node *cloned = head->next;
    Node *clonedHead = cloned;
    while (original != NULL) {
        original->next = original->next->next;
        // cout<<original->data<<" ";
        if (original->next != NULL) {
            clonedHead->next = original->next->next;
        }
        original = original->next;
        clonedHead = clonedHead->next;
    }
    return cloned;
    }
};
