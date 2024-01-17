#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

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

void beforePrint(struct Node* node)
{
	printf("Before reverse: ");
	//need the while next bc then it will be stuck on first node
	while(node -> next != NULL)
	{
		printf("%d ", node -> data);
		node = node -> next;
		//printf("%d", temp1 -> data);
	}
	printf("%d ", node -> data); //adding this because I want it to print on the node it stopped on which caused it to break
}

void ReversePrint(struct Node* p)
{
	if( p == NULL) return; //exit if its an empty ll
	ReversePrint(p -> next);//recursive call
	printf("%d ", p-> data); //first print value in code

	//what is going on in the recursion is that its a recursion tree and in the code it first reads out the list and then when it hits the end it will loop inside the if statement and print backwards and thats how it will reverse our string

	// if(p == NULL)
	// {
	// 	//printf("\n ");
	// 	return;
	// }
	// //this is the else
	// ReversePrint(p -> next);
	
	// printf("%d ", p -> data);
}

int main()
{
	struct Node* head = NULL; //local variable

	head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 5);

	beforePrint(head);
	
	printf("\nAfter reverse: ");
	ReversePrint(head);
}