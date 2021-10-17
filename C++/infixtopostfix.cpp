 #include<bits/stdc++.h>
 using namespace std;

// Precedence order of operators 
 int precedence(char x){
        
	if(x == '^')
		return 4;
	else if(x == '*' || x == '/')
		return 3;
	else if(x == '+' || x == '-')
		return 2;
	else
		return -1;
}

// conversion: Infix --> Postfix
string infixToPostfix(string s){
        
	stack<char> st;
	string res = "";
    
    // traverse whole string   
	for(auto x : s){
		// if character is operand then add it to res
		if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') )
			res += x;
		// if current character is '(' then push it into stack
		else if( x == '(')
			st.push(x);
		// if current character is ')' then pop it until we find '(' and add all poped elements into res
		else if(x == ')'){
			while(st.top() != '('){
				res += st.top();
				st.pop();
			}
		// pop '('
			st.pop();
		}else {
			// upto stack is not empty and precedence order of current operator is less than top operator  
			while(!st.empty() && precedence(x) <= precedence(st.top())){
				res += st.top();
				st.pop();
			}
			// push current operator into stack
			st.push(x);
		}
	}
    
    // pop all from stack and add it to our answer
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
        
	return res;
}

int main(){

	string infix = "A*(B+C)/D";	
	
	// output: ABC+*D/
	cout << infixToPostfix(infix) << endl;
	return 0;
}
    
    
