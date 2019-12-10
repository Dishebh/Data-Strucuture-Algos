#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
}

void newNode (int x) {
	Node *temp = new Node;
	temp -> data = x;
	temp -> left = temp -> right = NULL;
	return temp;
}

void InOrder (Node *root) {
	if (root != NULL) {
		InOrder (root -> left);
		cout << root -> data;
		InOrder (root -> right);
	}
}

void Insert (Node *node, int x) {
	if (node == NULL) return node;
	else if (node -> data < x) node -> left = Insert (node -> left, x);
	else if (node -> data > x) node -> right = Insert (node -> right, x);
	return node; 
}



int main ()
{



	return 0;
}