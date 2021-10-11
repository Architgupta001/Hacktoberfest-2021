#include <iostream>
using namespace std;

int top = -1; 
void Push(int[], int, int);
int Pop(int[]);
int Top();

int main()
{
    int n;
    cin>>n;
    int z = n;
    int count = 0;
    while (z > 0)
    {
        z /= 2;
        count++;
    }
    int stack[count + 1];
    while (n > 0)
    {
        Push(stack, n % 2, count);
        n /= 2;
    }
    while (top != -1)
    {
        Pop(stack);
    }
}

void Push(int stack[], int x, int c)
{
    if (top == c)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        stack[++top] = x;
    }
}

int Pop(int stack[])
{
    if (top == -1)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        int x;
        x = stack[top];
        top--;
        printf("%d", x);
    }
    return 0;
}
