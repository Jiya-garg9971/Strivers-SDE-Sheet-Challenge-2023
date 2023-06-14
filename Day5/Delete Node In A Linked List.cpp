void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    swap(node->data,node->next->data);
    node->next=node->next->next;
}
