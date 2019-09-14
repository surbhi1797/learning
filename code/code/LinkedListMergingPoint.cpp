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
	int length(node *root)
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
				temp = temp->next;
			}
			return cnt;
		}
	}

	int LinkedListMergingPoint(node* p, node* q)
	{
		
		while (p != NULL)
		{
			node* temp = q;
			while(temp!=NULL)
			{

				if (p == temp)
				{
					return p->data;
				}
				temp = temp->next;
			}
			p = p->next;
		}
		return -1;
		
	}

	int LinkedListMergingPoint2(node* p, node* q)
	{
		int a=length(p);
		int b=length(q);
		int diff;
		if (a > b)
		{
			diff = a - b;
			for (int i = 0; i < diff; i++) 
			{
				p = p->next;
			}
		}
		else
		{
			diff = b - a;
			for (int i = 0; i < diff; i++)
			{
				q = q->next;
			}
			
		}
		while (p != NULL)
		{	
			if (p == q)
			{
				return p->data;
			}
			p = p->next;
			q = q->next;
			
		}
		return -1;
	}
};

void main_8()
{
	node* p = NULL, *q = NULL;

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

	node* g = new node;
	g->data = 7;
	g->next = NULL;

	node* h = new node;
	h->data = 8;
	h->next = NULL;

	p = a;
	q = f;

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	e->next = NULL;

	f->next = g;
	g->next = h;
	h->next = d;
	

	//f->next = c;
	p->display(p);
	q->display(q);
	cout << " Merging Point : " << p->LinkedListMergingPoint2(p,q);
}