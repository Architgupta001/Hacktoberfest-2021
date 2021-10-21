//reverse a singly linkedlist using recursion
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * first, *ptr;
void create(int);
void display();
void reverse(struct node *);
int main()
{
    first = NULL;
    ptr = NULL;
    int a, n;
    printf("Enter the number of nodes \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Data \n");
        scanf("%d", &a);
        create(a);
    }
    printf("Linked list: \n");
    display();
    reverse(first);
    printf("\nLinked list after reversing it: \n");
    display();
    return 0;
}
void create(int a)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = a;
    temp->next = NULL;
    if (first == NULL)
    {
        first = temp;
    }
    else
    {
        ptr = first;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
void display()
{
    ptr = first;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void reverse(struct node *ptr)
{
    if (ptr->next == NULL)
    {
        first = ptr;
        return;
    }
    reverse(ptr->next);
    struct node *q;
    q = ptr->next;
    q->next = ptr;
    ptr->next = NULL;
}
