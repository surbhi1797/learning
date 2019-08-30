#include<iostream>
#include<stdlib.h>
using namespace std;

class LinkedList
{
public:
	struct node
	{
		int data;
		node* link;
	};

	node* root = NULL;

	void display()
	{
		node* temp = root;
		if (temp == NULL)
		{
			cout << "List empty";
		}
		else
		{
			while (temp != NULL)
			{
				cout << temp->data << endl;
				temp = temp->link;
			}
		}
	}

	int append(int data)
	{
	
		struct node* temp;
		temp = (struct node*)malloc(sizeof(struct node));
		temp->data=data;
		
		temp->link = NULL;

		if (root == NULL)
		{
			root = temp;
		}
		else
		{
			struct node* ptr;
			ptr = root;

			while (ptr->link != NULL)
			{

				ptr = ptr->link;
				
			}
			ptr->link = temp;
		}
		return 0;
	}
};

