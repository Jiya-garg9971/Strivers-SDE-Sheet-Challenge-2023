Node *firstNode(Node *head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast and fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            fast=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
