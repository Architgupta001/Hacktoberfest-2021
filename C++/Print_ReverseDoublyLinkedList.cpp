#include<bits/stdc++.h>
using namespace std;

// structure of a node
struct Node {
	int data;
	struct Node *prev;
	struct Node *next;
	
	// Creating a new node
	Node (int x) {
		data = x;
		prev = NULL;
		next = NULL;
	}
};

// head pointer
struct Node* start = NULL;

// inserting element into doubly linked list
void insertData(Node** head, Node* node){
	
	node -> prev =  (*head);
	
	if((*head) != NULL)
	(*head) -> next = node;
	else
	start = node;
	
	(*head) = node;
}

// print doubly linked list
void printList(Node *head){

	while(head != NULL){
	cout << head -> data << " ";
	head = head -> next;
	}
}

// print reverse
void printReverse(Node *head){
	
	if(head -> next != NULL)
	printReverse(head -> next);
	
	cout << head -> data << " ";
}

int main()
{
	Node* head = NULL;
	
	// creating doubly linked list
	for(int i = 0;  i < 10; i++){
		insertData(&head, new Node(i));
	}
	
	// 0<-->1<-->2<-->3<-->4<-->5<-->6<-->7<-->8<-->9
	printList(start);
	cout << endl;
	// 9<-->8<-->7<-->6<-->5<-->4<-->3<-->2<-->1<-->0
	printReverse(start);

	return 0;
}

