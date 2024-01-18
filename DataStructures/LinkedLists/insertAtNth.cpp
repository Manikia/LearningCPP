#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

void Insert(int data, int position)
{
	Node* temp = new Node();
	temp -> data = data;
	temp -> next = NULL;
	
	if(position == 1)
	{
		temp -> next = head; //makes current node as new head node of LL
		head = temp;// This line updates the head pointer to point to the newly inserted node (temp).
		return;
	}

	Node* temp1 = head;
    //using n-2 lets you stop a node before the node you want so you can reassign it to the next node and be able to connect them all
	for (int i = 0; i < position-2; i++)
	{
//we are looping to the next position which in this case would be two after the head
		temp1 = temp1 -> next;
        //makes a new fake head so we can see where we are at and create a new insertion
	}
    // once we are in our desired node we can reattach it
	temp -> next = temp1 -> next; //this is pointing to the n-1 node 
	temp1 -> next = temp;
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
