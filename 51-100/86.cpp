bool isValidParenthesis(string s)
{
    // Write your code here.
    if(s.length()%2!=0)return 0;
    stack<char>st;
    for(int i=0;i<s.length();i++){
      if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
        st.push(s[i]);
      } 
      else{
        if (!st.empty()){
          if ((s[i] == ')' && st.top() == '(')||
          (s[i] == ']' && st.top() == '[')||
          (s[i] == '}' && st.top() == '{'))
          {
              
              st.pop();
          }
          else return 0;

        } else {
          return 0;
        }
      }
    }
      if(st.empty())return 1;
      else return 0;
    
}