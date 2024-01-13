#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int n)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = n;
	
	//if we are inserting to a node that isnt empty then we have to do the below
	//if(head != NULL) temp -> next = head;
	//head = temp;//head is now pointing to new node being inserted

	//so instead of doing the above to check if its empty before we insert at beginning we can do the below since it takes into consideration inserting if its empty
	temp -> next = head;
	head = temp;
}

void Print()
{
	Node* temp = head;
	while(temp != NULL)
	{
		printf("%d", temp -> data);
		temp = temp -> next;
	}
	printf("\n");
}

void Delete(int n)
{
	//case where there is a node before the node we want to delete
	struct Node* temp1 = head;

	//special case when we want to delete the head node
	if(n == 1)
	{
		head = temp1 -> next; //head noe points to second node
		free(temp1); //removing first node and deallocates it
		return;
	}

	int i;

	for(i = 0; i < n-2; i++)
		temp1 = temp1 -> next;
		//temp1 points to (n-1)th node
	struct Node* temp2 = temp1 -> next; //nth node
	temp1 -> next = temp2 -> next; //(n+1)th node
	free(temp2); //delete temp2

}

int main()
{
	head = NULL; //empty list

	Insert(2);
	Insert(4);
	Insert(6);
	Insert(5);
	Print();

	int n;

	printf("Enter a position\n");
	scanf("%d", &n);
	Delete(n);
	Print();
}