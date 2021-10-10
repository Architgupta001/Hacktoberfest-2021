#include<iostream>
using namespace std;
#include<vector>
#include <queue>
template <typename t>
class treenode{
	public:
	t data;
	vector<treenode*> child; // or vector<treenode<t>*> child
	treenode(t data)
	{
		this->data=data;
	} 
};
treenode<int>* input2()        //input function
{
	int d;
	cout<<"Enter data"<<endl;
	cin>>d;
	
	treenode<int>* root=new treenode<int>(d);
	queue<treenode<int>*> nodes;
	nodes.push(root);
	
	while(nodes.size()!=0)
	{
		treenode<int>* front= nodes.front();
		nodes.pop();
		cout<<"Enter the no. of children of"<<front->data<<endl;
		int childno;
		cin>>childno;
		for(int i=0;i<childno;i++)
		{
			int n;
			cout<<"Enter "<<i+1<<"child of "<<front->data<<endl;
			cin>>n;
			treenode<int>* child1=new treenode<int>(n);
			front->child.push_back(child1);
			nodes.push(child1);
		}
		
	}
	return root;
}

void printk(treenode<int>* root,int k)          //prinitng kth nodes
{
	if(root==NULL)
	{
		return;
	}
	if(k==0)
	{
		cout<<root->data<<" ";
	}
	for(int i=0;i<root->child.size();i++)
	{
		printk(root->child[i],k-1);                         
	} 
}

int main()
{
	treenode<int> *root=input2();        //taking input
	int k;
	cout<<"Enter the row whose nodes to be find out :"<<endl;        //0,1,2,...
	cin>>k;  
	cout<<endl;
	printk(root,k);   //print nodes in kth node
	return 0;
}

