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

	void append(int data)
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
	
	}

	int length()
	{
		int cnt = 0;

		node* temp = root;
		if (temp == NULL)
		{
			return 0;
		}
		else
		{
			while (temp != NULL)
			{
				cnt++;
				temp = temp->link;
			}
			return cnt;
		}
	}
	
	void addafter(int loc, int data)
	{
		node* temp,*p;
		int i = 1;
		int len=length();

		temp = (struct node*)malloc(sizeof(struct node));
		if (loc > len)
		{
			cout << "Invalid location";
			cout << "List has" << len << "nodes";
		}
		
		else
		{
			p = root;
			while (i < loc)
			{
				p=p->link;
				i++;
			}
			
			temp->data=data;
			temp->link = NULL;
			temp->link = p->link;
			p->link = temp;

		}
	}

	void addmiddle(int data)
	{
		addafter(length() / 2,data);

	}
	void addbegin(int data)
	{
		node* temp;
		temp = new node;
		temp->link = NULL;
		temp->data = data;
		

		if (root == NULL)
		{
			root = temp;
		}

		else
		{
			temp->link = root;
			root = temp;
		}
	}

};

