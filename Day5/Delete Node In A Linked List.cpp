
Node* removeKthNode(Node* head, int K)
{
    // Write your code here
    Node* slow=head;
    int n=0;
    while(slow!=NULL){
        n++;
        slow=slow->next;
    }
    Node* fast=head;
    for(int i=0;i<n-K-1;i++){
        fast=fast->next;
    }
    if(K==n)return head->next;
    fast->next=fast->next->next;
    return head;
}
