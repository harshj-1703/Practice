#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

void insertLlLast(struct Node *&head, int data)
{
	struct Node *ptr = head;
	struct Node *add = new Node();
	add->data = data;
	
	if(head == NULL)
	{
		head = add;
		return;
	}
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = add;
}

void insertLlFirst(struct Node *&head, int data)
{
	struct Node *temp = new Node();
	temp->data = data;
	temp->next = head;
	if(head == NULL)
	{
		head = temp;
		return;
	}
	head = temp;
}

void displayLl(struct Node *head)
{
	struct Node * ptr = head;
	while(ptr != NULL)
	{
		cout<<ptr->data<<"->";
		ptr = ptr->next;
	}
}

int main()
{
	struct Node *head = new Node();
	head = NULL;
	insertLlLast(head,20);
	insertLlLast(head,30);
	insertLlFirst(head,10);
	displayLl(head);
	return 0;
}