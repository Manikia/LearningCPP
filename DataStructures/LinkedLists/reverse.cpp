#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

//struct Node* head;

struct Node* Reverse(struct Node* head)
{
	struct Node *current, *prev, *next;
	current = head;
	prev = NULL;

	while(current != NULL)
	{
		next = current -> next;
		current -> next = prev;
		//these last two lines in the loop is redirecting the pointers
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}

struct Node* Insert(struct Node* head, int data)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	
	temp -> next = head;
	head = temp;

	return head;
}

void Print(struct Node* head)
{
	struct Node* temp = head;
	//traverse to LL
	printf("List is: ");
	while (temp != NULL)
	{
		printf(" %d", temp -> data); //prints the data of each node it goes through
//we dont want to modify the main head so we dont lose our place of the LL so we use temp to take a copy of the current head and work with that
		temp = temp -> next; //goes to next node
	}
	printf("\n");
}

int main()
{
	struct Node* head = NULL;

	head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 8);

	Print(head);
	head = Reverse(head);
	Print(head);
}
