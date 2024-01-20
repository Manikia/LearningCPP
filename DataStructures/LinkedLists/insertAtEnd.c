#include <stdlib.h>
#include <stdio.h>

//creating node
struct Node{
	int data;
	struct Node* next;
};

struct Node* head;

//insert at end
void InsertAtEnd(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(x)); // creating a new node

	temp->data = x;
	temp->next = NULL; // the new node is currently the last node, so set its next to NULL

	if (head == NULL) {
		// if the list is empty, make the new node the head
		head = temp;
	} else {
		// traverse to the last node
		struct Node* last = head;
		while (last->next != NULL) {
			last = last->next;
		}
		// update the next pointer of the last node to point to the new node
		last->next = temp;
	}

}

void Print()
{

}

	

int main()
{ 
	InsertAtEnd(4);
	InsertAtEnd(2);
	InsertAtEnd(6);

	Print();
}