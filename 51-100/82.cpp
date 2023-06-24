#include <bits/stdc++.h> 
// Stack class.
class Stack {
    private:
    int *arr;
    int to;
    int size;
public:
    
    Stack(int capacity) {
        // Write your code here.
       arr=new int[capacity];
       size=capacity;
       to=-1;


    }

    void push(int num) {
        if(to==size)return;
        to++;
        arr[to]=num;
        
    }

    int pop() {
        // Write your code here.
        if(to==-1)return -1;
        int x=arr[to];
        to--;
        return x;
    }
    
    int top() {
        // Write your code here.
        if(to==-1)return -1;
        return arr[to];
    }
    
    int isEmpty() {
        // Write your code here.
        return (to==-1);
    }
    
    int isFull() {
        // Write your code here.
        return (to==size);
    }
    
};