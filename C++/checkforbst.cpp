#include<bits/stdc++.h>

using namespace std;

struct Node
{

    int data;

    Node *left, *right;

    Node(int val)
    {

        data = val;
        left = NULL;
        right = NULL;
    }
};

bool checkforBST(Node* root, Node* min=NULL, Node* max= NULL)
{
    if (root = NULL)
    {
        return 1;
    }

if(min != NULL && root->data <= min->data){
    return false;
}


if(max != NULL && root->data >= max->data){


return false;


}



bool leftvalid = checkforBST(root->left, min, root);


bool rightvalid = checkforBST(root->right, root, max);

return leftvalid && rightvalid;





}


int main()
{

    Node *root = new Node(1);

    root->left = new Node(2);

    root->right = new Node(3);

    if (checkforBST(root, NULL, NULL))
    {
        cout << "valid BST" << endl;
    }

    else
    {

        cout << "invalid BST" << endl;
    }

    return 0;
}