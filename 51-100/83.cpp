#include <bits/stdc++.h> 
class Node{
    public:
 int data;
 Node* next;

 Node(int x){
    data=x;
    next=nullptr;
 }
};
class Queue {

public:
Node *fron;
Node* rear;
    Queue() {
        // Implement the Constructor
        fron=nullptr;
        rear=nullptr;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return(fron==NULL);
        
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        Node* temp=new Node(data);
        if(fron==NULL){
            fron=temp;
            rear=temp;
        }
        else{
            rear->next=temp;
            rear=rear->next;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(fron==NULL)return -1;
        Node * temp=fron;
        int x=temp->data;
        fron=fron->next;
        delete temp;
        return x;
    }

    int front() {
        // Implement the front() function
        if(fron==NULL)return -1;
        return fron->data;
    }
};