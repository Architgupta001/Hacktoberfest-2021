#include<bits/stdc++.h>
using namespace std;

class Stack
{
    int top;
    public:
    int a[1000];
    Stack()
    {
        top = -1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top>=(999))
    {
        cout<<"\nStack Overflow!!";
        return false;
    }
    else
    {
        a[++top]=x;
        cout<<x<<" Pushed into stack!"<<endl;
        return true;
    }
}

int Stack::pop()
{
    if (top<0)
    {
        cout<<"\nStack Underflow!";
        return 0;
    }
    else
    {
        int x=a[top--];
        return x;
    }
}

int Stack::peek()
{
    if (top<0)
    {
        cout<<"\nStack is Empty";
        return 0;
    }
    else
    {
        int x=a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return(top < 0);
}

int main()
{
    class Stack s;
    int n,ele;
    cout<<"\nEnter number of elements to be in the stack: ";
    cin>>n;
    cout<<"\nEnter elements of stack: ";
    for (int i=0;i<n;i++)
    {
        cin>>ele;
        s.push(ele);
    }
    cout<<endl;
    cout<<s.pop()<<" Popped from stack!"<<endl;
    cout<<"\nElements present in stack : ";
    while (!s.isEmpty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
    cout<<'\n'<<endl;
    return 0;
}
