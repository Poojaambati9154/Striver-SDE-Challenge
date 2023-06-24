#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	stack<int>st;
	Node* dummy=new Node(-1);
	Node* curr=head;
	Node*temp=dummy;
	for(int i=0;i<n;i++){
		while(b[i]!=NULL && curr!=NULL){
			st.push(curr->data);
			curr=curr->next;
			b[i]--;
		}
        while (!st.empty()) {
          Node *x = new Node(st.top());
          st.pop();
          temp->next = x;
          temp = temp->next;
        }
    }
    while(curr!=NULL){
	    temp->next=curr;
	    curr=curr->next;
	    temp=temp->next;
	}
		
    
	return dummy->next;
}