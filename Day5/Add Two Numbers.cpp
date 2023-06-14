/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    int carry=0;
    Node * t1=num1,*t2=num2;
    Node* res=new Node(0);
    Node* ans=res;
    while(t1 and t2){
        int sum=t1->data + t2->data + carry;
        int digit=sum%10;
        ans->next=new Node(digit);
        ans=ans->next;
        carry=sum/10;
        t1=t1->next;
        t2=t2->next;
    }
    while(t1){
        int sum=t1->data + carry;
        int digit=sum%10;
        ans->next=new Node(digit);
        ans=ans->next;
        carry=sum/10;
        t1=t1->next;
    }
    while(t2){
        int sum=t2->data + carry;
        int digit=sum%10;
        ans->next=new Node(digit);
        ans=ans->next;
        carry=sum/10;
        t2=t2->next;
    }
    if(carry)
        ans->next=new Node(carry);
    return res->next;
}
