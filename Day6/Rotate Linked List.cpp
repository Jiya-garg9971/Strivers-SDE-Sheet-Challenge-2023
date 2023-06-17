Node *rotate(Node *head, int k) {
     // Write your code here.
     Node* t1=head;
     int c=0;
     while(t1!=NULL){
          t1=t1->next;c++;
     }
     k=k%c;
     c-=k;
     t1=head;
     for(int i=0;i<c;i++){
          t1=t1->next;
     }
     Node* res=new Node(0);
     Node* p=t1;
     Node* ans=res;
     while(p!=NULL){
          ans->next=p;
          ans=ans->next;
          p=p->next;
     }
     Node* t2=head;
     while(t2!=t1){
          ans->next=t2;
          ans=ans->next;
          t2=t2->next;
     }
     ans->next=NULL;
     
     return res->next;
}
