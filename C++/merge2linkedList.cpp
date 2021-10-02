#include<iostream>
using namespace std;

struct node{
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};

void printll(node*head){
	while(head != NULL){
		cout<<head->data<<" " ;
		head = head->next;
	}
}

void insertAtTail(node*&head,int d){
	if(head==NULL){
		head= new node(d);
		return;
	}
	
	node*tail=head;
	while(tail->next!=NULL){
		tail=tail->next;
	}
	tail->next=new node(d);
	return;
}

node*merge(node*a,node*b){
	
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	node*temp;
	if(a->data < b->data){
		temp=a;
		temp->next=merge(a->next,b);
	}
	else{
		temp=b;
		temp->next=merge(a,b->next);
	}
	
	return temp;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n1,n2,d;
		cin>>n1;
		node*head1=NULL;
		node*head2=NULL;
		while(n1--){
			cin>>d;
			insertAtTail(head1,d);
		}
		cin>>n2;
		while(n2--){
			cin>>d;
			insertAtTail(head2,d);
		}

		node*final=merge(head1,head2);
		printll(final);
		
	}
	
}
