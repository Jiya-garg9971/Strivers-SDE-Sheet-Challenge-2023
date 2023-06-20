Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	if (n < 1 || head == NULL || head->next == NULL)
        return head;
	Node* temp=head;
	int c=0;
	while(temp!=NULL){
		temp=temp->next;c++;
	}
	Node* dummy=new Node(0);
	dummy->next=head;
	Node *cur=dummy,*pre=dummy,*nex=dummy;
	for(int i=0;i<n;i++){
		if(c<=0)break;
		cur=pre->next;
		nex=cur->next;
		if(b[i]==0)continue;
		for(int j=1;j<min(c,b[i]);j++){
			cur->next=nex->next;
			nex->next=pre->next;
			pre->next=nex;
			nex=cur->next;
		}
		pre=cur;
		c-=b[i];
	}
	return dummy->next;
}
