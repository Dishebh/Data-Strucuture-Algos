#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void Insert (int item)
{

	Node *temp = new Node;
	temp -> data = item;
	temp -> next = NULL;

	if (head == NULL) {
		head = tail = temp;
		
	}
	else {
		tail -> next = temp;
		tail = temp;
	}

}

void Delete (int x)
{	
	if (x == head -> data) {
		Node *temp = head;
		head = head -> next;
		free (temp);
	}
	else
	{
		Node *ptr1, *ptr2;
		ptr1 = head;
		ptr2 = head -> next;
		while (ptr2 != NULL) {

			if (ptr2 -> data == x) {
				ptr1 -> next = ptr2 -> next;
				free (ptr2);
			}

		}
	}
	

}

void Show ()
{
    Node *temp = head;
    while (temp != NULL) {
        cout << temp -> data << " ";
    }
    cout << endl;
}

int main () 
{
	int ch;

	cout << "1. Select to insert the element into the linked list." << endl;
	cout << "2. Select to delete the element from the linked list." << endl;
	cout << "3. Select to show the linked list." << endl;
	cout << "4. Select to exit." << endl;
	cin >> ch;
	
	while (1) {

    	switch (ch) {
    		case 1:
    			int item;
    			cout << "Enter the element to be inserted in the linked list." << endl;
    			cin >> item;
    			Insert (item);
    			break;
    
    		case 2:
    		    int x;
    			cout << "Enter the element to be deleted from the linked list." << endl;
    			cin >> x;
    			Delete (x);
    			break;
    
    		case 3:
    			Show ();
    			break;
    
    		case 4:
    			exit (0);
    
    		default:
    			cout << "Wrong choice! Enter your choice again." << endl;
    			break;
    	}
	}

}