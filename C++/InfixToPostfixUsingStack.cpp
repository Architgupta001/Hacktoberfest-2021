#include <iostream>
#include<cstring>
using namespace std;
int top=-1;

int isempty(){
    if(top==-1)
    return 0;
    else
    return 1;
}

char pop(char stack[]){
    if(isempty()==1){
    char x;
    x = stack[top];
    top--;
    return x;
    }
}

void push(char stack[], char e){
    int x;
    top++;
    stack[top]=e;
}

int precedence(char ch){
    switch(ch)
    {
        case '+':
        case '-':
            return 1;
  
        case '*':
        case '/':
            return 2;
      
        case '^':
            return 3;
    }
    return -1;
        
}

int Operator(char ch){
    return (ch=='+' || ch=='-' || ch=='/' || ch=='*' || ch=='^');
}

int Operand(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void infixToPostfix(char exp[]){
    char stack[strlen(exp)];
    char left='(', right=')';
    
    //step 2 - push '(' into the stack
   push(stack, '(');
    
    //step 3 - scan the expression from left to right and perform the following operations until the stack is empty
    int i, k=-1;
     while(isempty()==1){
       for(i=0; i<strlen(exp); i++){
           
            //if an operand is encountered, add it to the output expression
            if(Operand(exp[i])){
                exp[++k]=exp[i];
            }
           
            //if a left parenthesis is encountered, push it onto stack
            else if(exp[i]=='('){
                push(stack, exp[i]);
               
            }
            
           /*if an operator is encountered, repeatedly pop from stack and add each operator (from the top of stack)
           to output expression which has the same precedence as or higher precedence than operator.
           Then add operator to stack. */
            else if(Operator(exp[i])){
            	
                char x;
                x = pop(stack);
                
                while(precedence(x) >= precedence(exp[i]))
                {
                    exp[++k]=x;
                    x = pop(stack);
                }
                
                push(stack, x);
                push(stack, exp[i]);
            }
            
           /*if a right parenthesis is encountered, then repeatedly pop from stack and add each operator 
           (from the top of stack) to output expression until a left parenthesis is encountered.
           Then remove the left parenthesis. */
            else if(exp[i]==right){
                char x;
                x = pop(stack);
                
                while(x!=left)
                {
                    exp[++k]=x;
                    x = pop(stack);
                }
            }
    
        }
    }
    
    //adding NULL terminator to the end of the output expression
    exp[++k] = '\0';
    //end
    cout<<exp;
    
}

int main()
{
    char exp[100];
    char brack[2]=")";
    cin>>exp;
    fflush(stdin);
    
    //step 1 - add ')' to the end of your expression
    strcat(exp,brack);
    infixToPostfix(exp);
    return 0;
}
