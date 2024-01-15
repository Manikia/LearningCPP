#include <stdlib.h>
#include <stdio.h>

struct Node
{
	int data;
	struct Node* next;
};

//struct Node* head;

// struct Node* Reverse(struct Node* head)
// {
// 	struct Node *current, *prev, *next;
// 	current = head;
// 	prev = NULL;

// 	while(current != NULL)
// 	{
// 		next = current->next;   // Save the next node
//         current->next = prev;   // Reverse the link
//         prev = current;         // Move prev to the current node
//         current = next;         // Move current to the next node
// 	}
// 	head = prev;
// 	return head;
// }

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

void Print(struct Node* p)
{
	if( p == NULL) return; //exit if its an empty ll

	printf("%d ", p-> data); //first print value in code
	Print(p -> next);//recursive call
}

int main()
{
	struct Node* head = NULL; //local variable

	head = Insert(head, 2);
	head = Insert(head, 4);
	head = Insert(head, 6);
	head = Insert(head, 8);

	Print(head);
}
