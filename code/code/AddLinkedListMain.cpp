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
				cout << temp->data;
				temp = temp->next;
			}
		}

		cout << endl << "*******" << endl;
	}

	int displayrev(node* root)
	{
		if (root == NULL)
		{
			return 0;
		}
		else
		{
			return root->data+(10*displayrev(root->next));
			

		}

	}

	
};

void main_14s()
{
	node* X = NULL;

	node* a = new node;
	a->data = 4;
	a->next = NULL;

	node* b = new node;
	b->data = 5;
	b->next = NULL;

	node* c = new node;
	c->data = 3;
	c->next = NULL;

	X = a;

	node* Y = NULL;

	node* d = new node;
	d->data = 3;
	d->next = NULL;

	node* e = new node;
	e->data = 8;
	e->next = NULL;

	node* f = new node;
	f->data = 9;
	f->next = NULL;

	Y = d;
	
	a->next = b;
	b->next = c;
	c->next = NULL;
	
	d->next = e;
	e->next = f;
	f->next = NULL;
	

	X->display(X);
	Y->display(Y);
	cout<<X->displayrev(X);
	cout << endl;
	cout<<Y->displayrev(Y);
	cout << endl;
	cout<< X->displayrev(X)+ Y->displayrev(Y);
}