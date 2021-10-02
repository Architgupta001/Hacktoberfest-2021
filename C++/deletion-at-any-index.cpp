//Satyam Dev
#include<iostream>
using namespace std;

struct node{
	int data;
	node*next;
	node(int d){
		data = d;
		next = NULL;
	}
};

void printLL(node*head){
	while(head != NULL){
		cout<<head->data<<" " ;
		head = head->next;
	}
}

void insertAtTail(node*&head,int data){
	if(head== NULL){
		head = new node(data);
		return;
	}
	node*tail = head;
	while(tail->next!= NULL){
		tail = tail->next;
	}	
	tail->next = new node(data);
	return;
}

void deletionHead(node*&head){
	node*temp = head->next;
	delete head;
	head=temp;
}

void deletionTail(node*&head){
	node*tail=head;
	while(tail->next->next!=NULL){
		tail=tail->next;
	}
	
	tail->next=NULL;
}

void deletionMid(node*&head,int idx){
	node*tail=head;
	idx-=1;
	while(--idx){
		tail=tail->next;
	}
	
	node*frwrd=tail->next->next;
	
	tail->next=frwrd;
	//delete tail->next;
}

int main(){
	int n,d;
	cin>>n;
	node *head = NULL;
	for(int i=0;i<n;i++){
		cin>>d;
		insertAtTail(head,d);
	}
	deletionMid(head,4);
	printLL(head);
	cout<<"\n";
	deletionHead(head);
	printLL(head);
	cout<<"\n";
	deletionTail(head);
	printLL(head);
	cout<<"\n";
	
}
