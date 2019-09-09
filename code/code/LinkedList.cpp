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

		cout << endl << "*******" << endl;
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

	void delbeg()
	{
		if (root == NULL)
		{
			cout << "List i empty";
		}

		else
		{
			
			root=root->link;
		
		}
		
	}

	void delpos(int loc)
	{
	
		int i=1;

		if (loc > length() || loc<0)
		{
			cout << "Invalid Location";

		}
		else if (loc == 1)
		{
			delbeg();
		}

		else
		{
			node* p=root, *q;
			while (i < loc - 1)
			{
				p = p->link;
				i++;
			}
			
			q = p->link;
			p->link = q->link;

			q->link = NULL;
			free(q);
			

		}
		}

	int mid()
	{
		node* fast=root, * slow=root;
		while (fast != NULL && fast->link !=NULL)
		{
			fast = fast->link->link;
			slow = slow->link;
		}

		return slow->data;

	}

	int poslast(int pos)
	{
		int count = 1;
		node* p = root, * q = root;

		for (count = 1; count <= pos; count++)
		{
			q = q->link;

		}
		while (q != NULL)
		{
			q = q->link;
			p = p->link;
		}

		return p->data;
	
	}

	void revlist()
	{
		node* temp = NULL, * next = NULL;
		while (root != NULL)
		{
			next = root->link;
			root->link = temp;
			temp = root;
			root = next;
		}
		root = temp;
		
	}

	void sort()
	{
		for (int i = 0; i < length(); i++)
		{

			node* temp = root;
			int p;
			while (temp->link != NULL)
			{
				if (temp->data > temp->link->data)
				{
					p = temp->data;
					temp->data = temp->link->data;
					temp->link->data = p;
				}
				temp = temp->link;
			}
		}
	}


};

