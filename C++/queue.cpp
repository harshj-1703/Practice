#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

void enQueue(struct Node *&head,int data)
{
	struct Node *add = new Node();
	add->data = data;
	
	if(head == NULL)
	{
		head = add;
		return;
	}
	
	struct Node *temp = head;

	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = add;
}

void deQueue(struct Node *&head)
{
	struct Node *temp = head->next;
	delete(head);
	head = temp;
}

void printQueue(struct Node *head)
{
	if(head == NULL)
	{
		return;
	}
	struct Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}

int main()
{
	struct Node *head = NULL;
	printQueue(head);
	enQueue(head,5);
	enQueue(head,10);
	enQueue(head,15);
	enQueue(head,20);
	deQueue(head);
	printQueue(head);
	return 0;
}