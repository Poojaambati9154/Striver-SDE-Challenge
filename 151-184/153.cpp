#include <bits/stdc++.h> 
class Kthlargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int k1;
    Kthlargest(int k, vector<int> &arr) {
       // Write your code here.
       k1=k;
       for(int i=0;i<arr.size();i++){
           
            pq.push(arr[i]);
    
           if(pq.size()>k){
               pq.pop();
           }
       }
    }

    void add(int num) {
        // Write your code here.
        
            pq.push(num);
    
           if(pq.size()>k1){
               pq.pop();
           }

    }

    int getKthLargest() {
       // Write your code here.
       return pq.top();
    }

};