#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next;
};
struct Node* top;

void push (int x) {
	Node *temp = new Node;
	temp -> data = x;
	temp -> next = top;
	top = temp;
}

void pop () {
	Node *temp;
	temp = top;
	top = top -> next;
	temp -> next = NULL;
	free (temp);
}

void Top () {
	if (top == NULL) exit(0);
	else cout << top -> data;
}

void show () {
	Node *temp = top;
	if (top == NULL) {
		cout << "Stack is empty!";
		exit (0);
	}
	while (temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}


}

int main ()
{

	push(1);
	push(2);
	push(3);
	push(4);

	show();

	cout << endl << "Top element is " << Top << endl;	

	pop();
	pop();

	show();

	cout << endl << "Top element is " << Top << endl;	

	return 0;
} 