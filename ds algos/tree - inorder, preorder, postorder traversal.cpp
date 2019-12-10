#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
	Node (int data) {
		this -> data = data;
		right = left = NULL;
	}
};

void PostOrder (Node *node) {
	if (node == NULL) return;
	PostOrder (node -> left);
	PostOrder (node -> right);
	cout << node -> data << " ";
}

void InOrder (Node *node) {
	if (node == NULL) return;
	InOrder (node -> left);
	cout << node -> data << " ";
	InOrder (node -> right);
}

void PreOrder (Node *node) {
	if (node == NULL) return;
	cout << node -> data << " ";
	PreOrder (node -> left);
	PreOrder (node -> right);
}

int main()
{
	
	Node *root = new Node(1);
	root -> left = new Node(2);
	root -> right = new Node(3);
	root -> left -> left = new Node(4);
	root -> left -> right = new Node(5);

	cout << endl << "Pre-Order traversal of binary tree is: " << endl;
	PreOrder(root);
	cout << endl << "In-Order traversal of binary tree is: " << endl;
	InOrder(root);
	cout << endl << "Post-Order traversal of binary tree is: " << endl;
	PostOrder(root);

	return 0;
}