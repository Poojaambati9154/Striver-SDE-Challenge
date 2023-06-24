#include <bits/stdc++.h> 
void ss(stack<int> &stack,int num){
	if(stack.empty() || stack.top()<num){
		stack.push(num);
		return;
	}
	int x=stack.top();
	stack.pop();
	ss(stack,num);
	stack.push(x);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty())return;
	int x=stack.top();
	stack.pop();
	sortStack(stack);
	ss(stack,x);
}