#include <iostream>

using namespace std;

class node
{
public:
	node* next;
	int data;
	
	void display(node* root)
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
				temp = temp->next;
			}
		}

		cout << endl << "*******" << endl;
	}

	bool isCircular(node* head) 
	{
		node* slow = head->next;
		node* fast = head->next->next;
		while (fast!=NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast)
			{
				return true;
			}
		}
		return false;
		

	}
};

void main()
{
	node* head = NULL;

	node* a = new node;
	a->data = 1;
	a->next = NULL;

	node* b = new node;
	b->data = 2;
	b->next = NULL;

	node* c = new node;
	c->data = 3;
	c->next = NULL;

	node* d = new node;
	d->data = 4;
	d->next = NULL;

	node* e = new node;
	e->data = 5;
	e->next = NULL;

	node* f = new node;
	f->data = 6;
	f->next = NULL;

	head = a;
	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = f;
	//f->next = c;
	//head->display(head);
	cout << " is circular : " << head->isCircular( head);
}