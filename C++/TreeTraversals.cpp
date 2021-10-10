//Program for tree Traversals
#include <bits/stdc++.h>
using namespace std;

//Node class that consist a data variable n left and right point 
class tree
{
public:
    int data;
    tree *left;
    tree *right;
    tree() 
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    tree(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// recursive preOrder traversal
void preOrder(tree *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

// recursive inOrder traversal
void inOrder(tree *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

// recursive posrOrder traversal
void postOrder(tree *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

//level order traverse or BFS using queue
void levelOrder(tree *root)
{
    if (root != NULL)
    {
        queue<tree *> Q;
        Q.push(root);
        while (Q.size() != 0)
        {
            tree *temp = Q.front();
            Q.pop();
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                Q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                Q.push(temp->right);
            }
        }
    }
}

int main()
{
    //making tree using heap
    tree *n1 = new tree(1);
    n1->left = new tree(2);
    n1->right = new tree(3);
    n1->left->left = new tree(4);
    n1->left->right = new tree(5);
    n1->right->left = new tree(6);
    n1->right->right = new tree(7);
    /*
		Tree:       1
			   / \
			  2    3
			 / \  / \
			4  5  6  7

	*/
    cout<<"PreOrder traversal:"<<" ";	
    preOrder(n1);
    cout<<endl<<"inOrder traversal:"<<" ";	
    inOrder(n1);
    cout<<endl<<"postOrder traversal:"<<" ";
    postOrder(n1);
    cout<<endl<<"levelOrder traversal:"<<" ";
    levelOrder(n1);
    return 0;
}
