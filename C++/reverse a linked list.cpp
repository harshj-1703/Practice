#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

void printLinkedList(struct Node *head)
{
	struct Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}

void addLinkedListFront(struct Node *&head, int data)
{
	struct Node *add = new Node();
	add->data = data;
	
	if(head == NULL)
	{
		head = add;
		return;
	}
	
	add->next = head;
	head = add;
}

void ReversedLinkedList(struct Node *&head)
{
	if(head == NULL)
	{
		return;
	}
	if(head->next == NULL)
	{
		cout<<head->data<<endl;
		return;
	}
	
	struct Node *nextNode = NULL;
	struct Node *currNode = head;
	struct Node *prevNode = NULL;
	
	while(currNode != NULL)
	{
		nextNode = currNode->next;
		currNode->next = prevNode;
		prevNode = currNode;
		currNode = nextNode;
	}
	head = prevNode;
}

int main()
{
	struct Node *head = NULL;
	addLinkedListFront(head,5);
	addLinkedListFront(head,10);
	addLinkedListFront(head,15);
	addLinkedListFront(head,20);
	addLinkedListFront(head,25);
	cout<<"Linked List : ";
	printLinkedList(head);
	cout<<endl;
	
	cout<<"Reversed Linked List : ";
	ReversedLinkedList(head);
	addLinkedListFront(head,30);
	printLinkedList(head);
	cout<<endl;
	
	cout<<"Again Reversed Linked List : ";
	ReversedLinkedList(head);
	printLinkedList(head);
	
	return 0;
}