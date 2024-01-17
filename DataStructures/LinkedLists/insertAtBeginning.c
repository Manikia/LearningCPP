#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next; //this is w c
	//this is w c++: Node* next;
};
struct Node* head;
void Insert(int x)
{
	struct Node* temp = (struct Node*)malloc(sizeof(x));
	temp -> data = x;
	
	//if we are inserting to a node that isnt empty then we have to do the below
	//if(head != NULL) temp -> next = head;
	//head = temp;//head is now pointing to new node being inserted

	//so instead of doing the above to check if its empty before we insert at beginning we can do the below since it takes into consideration inserting if its empty
	temp -> next = head;
	head = temp;
}

void Print()
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
	head = NULL; //empty list
	printf("How many numbers to create a list?");
	int n, i, x;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("Enter a number \n");
		scanf("%d", &x);
		
		Insert(x);
		Print();
	}
}