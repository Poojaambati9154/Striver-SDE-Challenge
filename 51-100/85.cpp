#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
    stack<int>i,o;
    public:
    Queue() {
        // Initialize your data structure here.
    }


    void enQueue(int val) {
        // Implement the enqueue() function.
        i.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(!o.empty()){
            int x = o.top();
            o.pop();
            return x;
        }
        else{
            if(i.empty()){
                return -1;
            }
            else{
              while (!i.empty()) {
                o.push(i.top());
                i.pop();
              }
              int x = o.top();
              o.pop();
              return x;
            }
        } 
       
    }

    int peek() {
        // Implement the peek() function here.
        if(!o.empty()){
            int x = o.top();
            return x;
        }
        else{
            if(i.empty()){
                return -1;
            }
            else{
              while (!i.empty()) {
                o.push(i.top());
                i.pop();
              }
              int x = o.top();
              return x;
            }
        } 
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return (i.empty()&&o.empty());
    }
};