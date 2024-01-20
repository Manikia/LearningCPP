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

	temp -> data = x;
	temp -> next = NULL; //we are setting the next node to be empty

	//create a statement incase its empty and then an else if it isnt
	if(head == NULL)
	{
		head = temp;
	}
	else{
		// traverse to the last node
		struct Node* head2 = head;
		while (head2->next != NULL){
			head2 = head2->next; //we do this so we can move to the next node everytime but if we do head2->next=head2 then it will only traverse and not move
		}
		// update the next pointer of the last node to point to the new node
		head2->next = temp;
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