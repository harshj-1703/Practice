#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

void push(struct Node *&head,int data)
{
	struct Node * add = new Node();
	add->data = data;
	
	if(head == NULL)
	{
		head = add;
		return;
	}
	add->next = head;
	head = add;
}

void pop(struct Node*&head)
{
	struct Node *temp = head->next;
	delete(head);
	head = temp;
}

void printStack(struct Node *head)
{
	if(head == NULL)
	{
		return;
	}
	struct Node * temp=head;
	while(temp != NULL)
	{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
}

int main()
{
//	struct Node *head = new Node();
	struct Node *head = NULL;
	printStack(head);
	cout<<"After Push : "<<endl;
	push(head,5);
	push(head,10);
	push(head,15);
	pop(head);
	printStack(head);
	return 0;
}