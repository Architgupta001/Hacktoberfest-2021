#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

struct stack{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack* ptr){
    if (ptr->top<0){
        
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct stack* ptr){
    if (ptr->top>ptr->size-1){
        
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("Stack overflow ");
        
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow");
        return -1;
        
    }
    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int stackTop(struct stack *ptr){
    return (ptr->top);
}

int precedence(char ch){
    if(ch=='*'||ch=='/'){
        return 3;
    }
    else if(ch=='+' || ch=='-'){
        return 2;
    }
    else{
        return 0;
    }

}
int isOperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
        return 1;
    }
    else{
        return 0;
    }
}
char * infixtopostfix(char* infix){
    struct stack *sp=new struct stack[sizeof(struct stack)];
    sp->size=100;
    sp->top=-1;
    sp->arr=new char[sizeof(char)*sp->size];
    char *postfix=new char[sizeof(char)*strlen(infix+1)];
    int i=0;//track infix
    int j=0;//track postfix;
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;

        }
        else{
            if(precedence(infix[i])>precedence(stackTop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }

        }
        


    }
    while(!isEmpty(sp)){
            postfix[j]=pop(sp);
            j++;
        }
        postfix[j]='\0';
        return postfix;

}

int main(){
    char *infix="p-q-r/a";
    printf("%s",infixtopostfix(infix));
    
    


}
