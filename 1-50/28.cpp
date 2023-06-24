/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    // Write your code here.
    Node* temp=new Node(-1);
    temp->next=head;
    Node* fast=temp;
    Node* slow=temp;
    for(int i=0;i<k;i++){
        fast=fast->next;
    }
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
  
    slow->next=slow->next->next;
   
    return temp->next;
}
