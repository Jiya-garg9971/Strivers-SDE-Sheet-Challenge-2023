Node* findIntersection(Node *firstHead, Node *secondHead) {
    Node* temp = firstHead;
    Node* temp2 = secondHead;
    int n1 = 0, n2 = 0;
    while (temp != NULL) {
        temp = temp->next;
        n1++;
    }
    while (temp2 != NULL) {
        temp2 = temp2->next;
        n2++;
    }
    Node* a = firstHead;
    Node* b = secondHead;
    while (n2 > n1) {
        b = b->next;
        n2--;
    }
    while (n2 < n1) {
        a = a->next;
        n1--;
    }
    while (a != NULL && b != NULL && a != b) {
        a = a->next;
        b = b->next;
    }
    return a;  // or return b; since they will be equal if there's an intersection
}
