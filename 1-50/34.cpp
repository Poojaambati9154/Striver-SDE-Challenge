#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> * m(LinkedListNode<int> *head){
    
    LinkedListNode<int> *slow=head;
   LinkedListNode<int> * fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
       
        fast=fast->next->next;
         slow=slow->next;
    }
    return slow;
}
LinkedListNode<int> * r(LinkedListNode<int> *head){
if(head==NULL || head->next==NULL)return head;
   LinkedListNode<int> *curr=head;
   LinkedListNode<int> * prev=NULL;
    LinkedListNode<int> * nex=NULL;
    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL)return true;
    LinkedListNode<int> *mid=m(head);
    LinkedListNode<int> *rev=r(mid->next);
    while(rev){
        if(head->data!=rev->data){
            return false;
        }
        
        rev=rev->next;
        head=head->next;
    }
    return true;


}