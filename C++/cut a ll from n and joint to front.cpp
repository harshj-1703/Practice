#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

void printLL(struct Node *head)
{
	if(head == NULL)
	{
		return;
	}
	if(head->next == NULL)
	{
		cout<<head->data;
	}
	
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

void cutAndAddFront(struct Node *&head,int n)
{
	if(head == NULL)
	{
		cout<<endl<<"Empty Linked List";
		return;
	}
	if(head->next == NULL)
	{
		cout<<endl<<"Only one Node in Linked List";
		return;
	}
	
	struct Node *temp = head;
	struct Node *nth = NULL;
	
	while(n!=0)
	{
		if(temp->next == NULL)
		{
			cout<<endl<<"N is out of range"<<endl;
			return;
		}
		if((n-1) == 0)
		{
			nth = temp->next;
			temp->next = NULL;
		}
		temp = temp->next;
		n--;
	}
	
	temp = nth;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = head;
	head = nth;
}

int main()
{
	struct Node *head = NULL;
	addLinkedListFront(head,70);
	addLinkedListFront(head,60);
	addLinkedListFront(head,50);
	addLinkedListFront(head,40);
	addLinkedListFront(head,30);
	addLinkedListFront(head,20);
	addLinkedListFront(head,10);
	printLL(head);
	cout<<endl<<"After cut and add front : ";
	cutAndAddFront(head,7);
	printLL(head);
	
	return 0;
}