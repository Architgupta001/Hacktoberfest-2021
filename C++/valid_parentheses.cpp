/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.*/
#include <bits/stdc++.h>
using namespace std;
    bool isValid(string expr) {
   {
	stack<char> s;
	char x;
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '['
			|| expr[i] == '{')
		{
			s.push(expr[i]);
			continue;
		}
		if (s.empty())
			return false;

		switch (expr[i]) {
		case ')':
			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':
			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':
			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}
	return (s.empty());
}}

int main(){
    string str="()[]{}";
  if (isValid(str))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
