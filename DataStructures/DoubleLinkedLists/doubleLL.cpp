#include <stdlib.h>
#include <stdio.h>

//creating double ll

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head;

struct Node* getNewNode(int x)
{
    //when we create a node we should avoid doing the below bc it will only create it as a local variable which means it will forget its value once the function is done
    //struct Node myNode;
    
    //so instead we create a dynamic memory/heap and we do:
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode -> data = x;
    newNode -> next = NULL;
    newNode -> prev = NULL;

    return newNode;
}

void InsertAtHead(int x)
{
    struct Node* newNode = getNewNode(x);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    head -> prev = newNode; //setting the pointer to left side new node as newNode as well
    newNode -> next = head;
    head = newNode;
}

void InsertAtTail(int x)
{
    struct Node* temp = getNewNode(x);

    if (temp == NULL) return; // Check if memory allocation failed

    // If the list is empty, set the new node as the head
    if (head == NULL) {
        head = temp;
        return;
    }

    // Traverse to the last node
    struct Node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }

    // Connect the new node to the last node
    last->next = temp;
    temp->prev = last;
}

void Print()
{
    struct Node* temp = head;

    printf("Forward: ");
    //go to last node
    while(temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

void ReversePrint()
{
	struct Node* temp = head;

    if(temp == NULL) return; //empty list
    //going to last node
    while(temp -> next != NULL)
    {
        temp = temp -> next;
    }
    //traversing backwards using prev pointer
    printf("Reverse: ");
    while(temp != NULL)
    {
        //passing a temp pointer to point previously to reverse
        printf("%d ", temp -> data);
        temp = temp -> prev;
    }
    printf("\n");
}

int main()
{
    head = NULL; //to show empty initial list
    InsertAtTail(2); Print(); ReversePrint();
    InsertAtTail(4); Print(); ReversePrint();
    InsertAtTail(6); Print(); ReversePrint();
}