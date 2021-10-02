/*
  Merge Sort :-
  -------------
  -> Merge sort is one of the most efficient sorting algorithms. It works on the principle of Divide and Conquer. Merge sort repeatedly breaks down a list into several sublists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

  Time Complexity:-
  ->The time complexity of MergeSort is O(n*Log n) in all the 3 cases (worst, average and best) as the mergesort always divides the array into two halves and takes linear time to merge two halves.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

// Function to find the middle of the linked list
void findMiddle(Node *curr, Node **first, Node **second)
{
  Node *slow = curr;
  Node *fast = curr->next;

  while (fast != NULL)
  {
    fast = fast->next;
    if (fast != NULL)
    {
      slow = slow->next;
      fast = fast->next;
    }
  }

  *first = curr;
  *second = slow->next;
  slow->next = NULL;
}

// Function to merge the linked list into one in sorted order.
Node *mergeBoth(Node *first, Node *second)
{
  Node *ans = NULL;

  if (!first)
    return second;
  else if (!second)
    return first;

  if (first->data <= second->data)
  {
    ans = first;
    ans->next = mergeBoth(first->next, second);
  }
  else
  {
    ans = second;
    ans->next = mergeBoth(first, second->next);
  }
}

// Merge sort function for Linked list
void mergeSorting(Node **head)
{
  Node *curr = *head;
  Node *first;
  Node *second;

  if (!curr || !curr->next)
    return;

  findMiddle(curr, &first, &second);
  mergeSorting(&first);
  mergeSorting(&second);

  *head = mergeBoth(first, second);
}

Node *mergeSort(Node *head)
{
  mergeSorting(&head);
  return head;
}

// Function to print the linked list
void printList(Node *head)
{
  if (head == NULL)
  {
    return;
  }

  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  Node *first = new Node(20);
  Node *second = new Node(10);
  Node *third = new Node(30);
  Node *fourth = new Node(90);
  Node *fifth = new Node(60);
  Node *sixth = new Node(50);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = sixth;
  Node *head = first;
  cout << "Linked list Befor Sorting: " << endl;
  printList(head);
  head = mergeSort(head);
  cout << endl;
  cout << "Linked list After Sorting: " << endl;
  printList(head);
  return 0;
}