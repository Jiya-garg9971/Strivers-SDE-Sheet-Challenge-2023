/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */
#include<queue>
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	Node* ans=new Node(0);
	Node* res=ans;
	priority_queue<pair<int,Node*>> pq;
	
	while(head){
		pq.push({-head->data,head});
		head=head->next;
	}
	while(!pq.empty()){
		Node*s=pq.top().second;
		res->child=new Node(s->data);
		res=res->child;
		pq.pop();
		if(s->child)pq.push({-s->child->data,s->child});
	}
	return ans->child;
}
