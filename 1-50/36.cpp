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
Node* merge(Node*h1,Node*h2){
	Node* curr=new Node(-1);
	Node* ptr=curr;
	while(h1!=NULL && h2!=NULL){
		if(h1->data<h2->data){
           curr->child=h1;
		   h1=h1->child;
		}
		else{
			curr->child=h2;
			h2=h2->child;
		}
		curr=curr->child;
	}
	if(h1!=NULL){
		curr->child=h1;
		
	}
	if(h2!=NULL){
		curr->child=h2;
		
	}
	return ptr->child;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL)return head;
	Node* h1=head;
	Node* h2=head->next;
	h1->next=NULL;
	h2=flattenLinkedList(h2);
	Node*ans=merge(h1,h2);
	return ans;

}
