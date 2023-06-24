 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   int n=heights.size();
   vector<int>nsr(n);
   vector<int>nsl(n);
   stack<int>st;
   for(int i=0;i<n;i++){
      if (st.empty()) {
       nsl[i] = -1;
      }
      else {
       while (!st.empty() && heights[st.top()] >= heights[i]) {
         st.pop();
       }
       if (st.empty()) {
         nsl[i] = -1;
       } else {
         nsl[i] = st.top();
       }
      }
       st.push(i);
     
    }
    while(!st.empty())st.pop();
    for(int i=n-1;i>=0;i--){
      if(st.empty()){
        nsr[i]=n;

      }
      else{
        while (!st.empty() && heights[st.top()] >= heights[i]) {
         st.pop();
       }
       if (st.empty()) {
         nsr[i] = n;
       } else {
         nsr[i] = st.top();
       }
      }
      st.push(i);
    }
     int ans=0;
    for(int i=0;i<n;i++){
      ans=max(ans,heights[i]*(nsr[i]-nsl[i]-1));
    }
    return ans;
 }