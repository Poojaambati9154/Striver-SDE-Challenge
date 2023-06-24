#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL)return second;
    if(second==NULL)return first;
    Node<int>*curr=new Node<int>(-1);
    //curr->next=head;
    Node<int>*ptr=curr;
    while(first!=NULL && second!=NULL){
       if(first->data<second->data){
           curr->next=first;
           first=first->next;
       }
       else{
           curr->next=second;
           second=second->next;
       }
       curr=curr->next;
    }
    if(first!=NULL){
        curr->next=first;
    }
    if(second!=NULL){
        curr->next=second;
    }
    return ptr->next;
}
