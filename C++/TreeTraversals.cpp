#include <bits/stdc++.h>
using namespace std;

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

void preOrder(tree *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(tree *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

void postOrder(tree *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

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
    tree *n1 = new tree(1);
    n1->left = new tree(2);
    n1->right = new tree(3);
    n1->left->left = new tree(4);
    n1->left->right = new tree(5);
    n1->right->left = new tree(6);
    n1->right->right = new tree(7);
    /*
		Tree:   1
			   / \
			  2	  3
			 / \  / \
			4  5  6  7

	*/
    // preOrder(n1);
    // inOrder(n1);
    // postOrder(n1);
    levelOrder(n1);
    return 0;
}