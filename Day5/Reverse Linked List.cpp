LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(!head || !head->next)return head;
    LinkedListNode<int> *ans=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return ans;


    // Write your code here
}
