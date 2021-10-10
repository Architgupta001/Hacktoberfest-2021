#include <bits/stdc++.h>
using namespace std;


struct node{
    int data;
    struct node*left;
    struct node*right;
// constructor
    node(int val){
        data=val;
        left=right=NULL;
    }
};

void kthnode(struct node* root ,int n){
    if(root==NULL) return;
    static int count=0;
    if(count<n){
     kthnode(root->left,n);
     count++;
     if(count==n) cout<<root->data<<" ";
     kthnode(root->right, n);
    }
}
int main() 
{
 struct node*root= new node(1);
 root->left= new node(2);
 root->right=new node(7);
 root->left->left=new node(3);
 root->left->right= new node(4);
 root->left->right->left= new node(5);
 root->left->right->right= new node(6);
 kthnode(root,7);

return 0;
}
