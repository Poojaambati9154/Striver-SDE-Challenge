#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int>v(n);
    stack<int>st;
   // st.push(-1);
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            v[i]=-1;
        }
        else{
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                v[i]=-1;
            } else {
              v[i] = st.top();
            }
        }

        st.push(arr[i]);
    }
    return v;

}