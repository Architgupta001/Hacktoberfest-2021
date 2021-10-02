#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node*right;
	
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* btfa(int *a,int s,int e){
	if(s>e){return NULL;}
	
	int mid=(s+e)/2;
	node* root = new node(a[mid]);	
	root->left=btfa(a,s,mid-1);
	root->right=btfa(a,mid+1,e);	
	return root;
}

void preOrd(node* root){
	if(root==NULL){return;
	}
	cout<<root->data<<" ";
	preOrd(root->left);
	preOrd(root->right);
}
void inRange(node* root,int x,int y){
	if(root==NULL){return;
	}
	if(root->data>x-1 and root->data<y){
		cout<<root->data<<" ";
	}
	preOrd(root->left);
	preOrd(root->right);
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d,x,y;
		int a[1000];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>d;
			a[i]=d;
		}
		
		node*root = btfa(a,0,n-1);
		cin>>x>>y;
		cout<<"# Preorder : ";
		preOrd(root);
		cout<<"\n# Nodes within range are : ";
		inRange(root,x,y);
		cout<<"\n";
		
	}
}
