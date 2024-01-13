#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int data, int n)
{
	Node* temp1 = new Node();
	temp1 -> data = data;
	temp1 -> next = NULL;
	
	if(n == 1)
	{
//if there is just one node then it will add the new node at the beginning as default
		temp1 -> next = head;
		head = temp1;
		return;
	}

	Node* temp2 = head;
    //using n-2 lets you stop a node before the node you want so you can reassign it to the next node and be able to connect them all
	for (int i = 0; i < n-2; i++)
	{
//we are looping to the next position which in this case would be two after the head
		temp2 = temp2 -> next;
        //makes a new fake head so we can see where we are at and create a new insertion
	}
    // once we are in our desired node we can reattach it
	temp1 -> next = temp2 -> next; //this is pointing to the n-1 node 
	temp2 -> next = temp1;
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
int main()
{
	head = NULL;
	Insert(2,1); //list: 2
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
}
