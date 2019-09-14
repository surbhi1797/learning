#include<iostream>
#include<stdlib.h>
using namespace std;

class StackLinkedList
{
public:
	struct node
	{
		int data;
		struct node* next;
	};
	node* top=NULL;
	void push(int data)
	{
		node* temp;
		temp = new node;
		temp->next = NULL;
		temp->data = data;
		if (top == NULL)
		{
			top = temp;
		}
		else
		{
			temp->next = top;
			top = temp;


		}

	}
	void pop()
	{
		if (top == NULL)
		{
			cout << "Stack is empty" << endl;
		}
		else
		{
			node* temp;
			temp = top;
			cout << "Element deleted is: " << top->data<<endl;
			top = top->next;
			temp->next = NULL;
			free(temp);

		}
	}

	void display()
	{
		if (top == NULL)
		{
			cout << "Stack is empty" << endl;
		}
		else
		{
			node* temp = top;
			while (temp != NULL)
			{
				cout << temp->data << "->"<<endl;
				temp = temp->next;
			}
		}

	}
};