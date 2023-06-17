#include <bits/stdc++.h> 

LinkedListNode<int>* reverse(LinkedListNode<int>* head) {
    if (!head || !head->next) {
        return head;
    }

    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* nex;

    while (curr != NULL) {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int>* head) {
       if(!head || !head->next)return true;
     LinkedListNode<int>* slow=head;
      LinkedListNode<int>* fast=head->next;
      while(fast and fast->next){
          slow=slow->next;
          fast=fast->next->next;
      }
    LinkedListNode<int>* reversedHead = reverse(slow);
    LinkedListNode<int>* tempReversed = reversedHead;
    LinkedListNode<int>* temp = head;
    while (tempReversed and temp) {
        if (temp->data != tempReversed->data) {
            return false;
        }
        temp = temp->next;
        tempReversed = tempReversed->next;
    }

    return true;
}
