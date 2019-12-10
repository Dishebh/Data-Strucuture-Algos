#include<bits/stdc++.h>
using namespace std;

bool c = false;

struct Node
{
	int data;
	Node* left;
	Node* right;
};

struct Node* getNode(int data)
{
	Node* newNode=new Node();
	newNode->data=data;
	newNode->left=NULL;
	newNode->right=NULL;
	return newNode;
}

void inorder(struct Node* root)
{
    if (root != NULL)
     {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

Node* findMin(Node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root;
}

struct Node* Insert(struct Node* root, int data)
{
	if (root == NULL)
		return getNode(data);

	if (data < root->data)
		root->left  = Insert(root->left, data);
	else if (data > root->data)
		root->right = Insert(root->right, data);

	return root;
}

bool Search(Node* root,int value)
{ 
	if(root == NULL)
		return false;
	else if(root->data == value)
	{
		return true;
	}
	else if(value < root-> data)
		Search(root->left,value);
	else if(value > root->data)
		Search(root->right,value);
}


Node* Delete(Node* root, int value)
{ 
	c = Search(root,value);
	if(root==NULL)
		return root;
	else if(value< root->data)
	{
		root->left= Delete(root->left,value);
	}
	else if(value> root->data)
	{
		root->right= Delete(root->right,value);
	}
	
	
	else
	{
		
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
			root=NULL;
			return root;
		}
		
		else if(root->left==NULL)
		{
			struct Node* temp=root;
			root=root->right;
			delete temp;
			return root;
		}
		else if(root->right==NULL)
		{
			struct Node* temp=root;
			root=root->left;
			delete temp;
			return root;
		}
		
		else
		{
			Node*temp=findMin(root->right);
			root->data=temp->data;
			root->right=Delete(root->right,temp->data);
		}
	}
	return root;

}


int main()
{  
	Node* root=NULL;
	root=Insert(root,20);
	Insert(root,15);
	Insert(root,25);
	Insert(root,18);
	Insert(root,10);
	Insert(root,16);
	Insert(root,19);
	Insert(root,17);

	cout<<"Before Deletion: "<<endl;
	cout<<"Inorder: ";
	inorder(root);
	cout<<endl<<endl;

	Delete(root,15);

	if(c)
	{   
		cout<<"Node Deleted"<<endl;
		cout<<"\nAfter Deletion: "<<endl;
		cout<<"Inorder: ";
		inorder(root);
		cout<<endl;
	}
	else
		cout<<"Node Not Found"<<endl;

	return 0;

}