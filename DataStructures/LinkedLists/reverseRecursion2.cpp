#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

struct Node* Insert(struct Node* head, int data)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	temp -> next = NULL;
	
	if (head == NULL) head = temp;
	else{
		Node* temp1 = head;
		
		while(temp1 -> next != NULL) temp1 = temp1 -> next;
		temp1 -> next = temp;
	}

	return head;
	
}

void Reverse(struct Node* p)
{
	//so in this it will loop until the end but its a node before the end and when it hits it, it will set the node before ending as the head and then reverse back reading each node in the ll
	if(p -> next == NULL)
	{
		head = p;
		//if the head was not a global variable then we would have to return the modified head
		
		return;
	}
	Reverse(p -> next);

	//this runs after recursive call
	//these are pointing backwards
	struct Node* q = p -> next;
	q -> next = p;

	//for the two lines above we could have also done:
	//p -> next -> next = p;
	p -> next = NULL;
	
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
	head = NULL; //local variable

	head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 5);
	
	Reverse(head);

	Print(head);
}