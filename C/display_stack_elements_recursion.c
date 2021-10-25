#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top;
void push(int);
void pop();
void display(struct node *);
int main()
{
    top=NULL;
    int n,a;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter data\n");
        scanf("%d",&a);
        push(a);
    }
    printf("Stack:\n");
    display(top);
    pop();
    printf("Updated Stack:\n");
    display(top);
    return 0;
}
void push(int x)
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if(top==NULL)
    {
        top=temp;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}
void pop()
{
    if(top==NULL)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
    struct node*ptr;
    ptr=top;
    printf("\n%d is popped \n",ptr->data);
    top=top->next;
    ptr=NULL;
    free(ptr);
    }
}
void display(struct node *ptr)
{
    if(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        return(display(ptr->next));
    }
    else
    return ;
}
