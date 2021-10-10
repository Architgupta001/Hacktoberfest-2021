// Inorder Traversal--firstly we visit all the nodes in the left subtree , then the root node , and then all the nodes in right subtree.
//    k=3
//          1
//         /  \
//        2     3
//       / \   /  \
//      4   5  6   7
//   inorder traversal is -- 4 2 5 1 6 3 7 
// output: 5 

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

//function to print kth node

void kthnode(struct node* root ,int n){
    if(root==NULL) return;
    static int count=0;
    if(count<n){
        
     kthnode(root->left,n);  // recurring on left child 
     count++;
     if(count==n) cout<<root->data<<" "; // here count=n then print element
        
     kthnode(root->right, n);   // recurring on right child 
    }
}
// driver program 
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

// Time Complexity-- O(n) where n is number of nodes in binary tree

