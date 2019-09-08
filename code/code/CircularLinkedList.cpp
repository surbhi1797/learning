#include<iostream>
using namespace std;



class CircularLinkedList
{
public:

	struct circular
	{
		circular* next;
		int data;
	};
	circular* root = NULL;

	void append(int data)
	{
		circular* temp;
		temp = new circular;
		temp->data = data;

		if (root == NULL)
		{
			root = temp;
			root->next = temp;
		}
		else
		{
			circular* p=root;
			int i = 1;
			while (p->next != root)
			{
				p = p->next;
				i++;
			}
			p->next = temp;
			temp->next = root;

		}



	}

	void display()
	{
		circular* temp=root;
		
		while (temp->next != root)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
		cout << temp->data << endl;
		cout << "*************************"<<endl;
	}

	void addbeg(int data)
	{
		circular* temp;
		temp = new circular;

		temp->data = data;

		if (root == NULL)
		{
			root = temp;
		}
		else
		{
			circular* p=root;
			int i = 1;
			while (p->next != root)
			{
				p = p->next;
			}
			p->next = temp;
			temp->next = root;
			root = temp;
		}

	}

	int length()
	{
		circular* temp = root;
		int count = 0;
		if (root == NULL)
		{
			return 0;
		}
		else
		{
			while (temp->next != root)
			{
				temp = temp->next;
				count++;
			}
			return count + 1;
		}
	}
	
	void addpos(int data, int pos)
	{
		circular* temp;
		temp = new circular;
		temp->data = data;
		if (pos>length())
		{
			cout << "Invalid position";
			cout << "List has" << length() << "nodes";
		}
		else if (pos == 1)
		{
			addbeg(data);
		}
		else
		{
			int i=1;
			circular* p = root;
			while (i < pos - 1)
			{
				p = p->next;
				i++;
			}
			temp->next = p->next;
			p->next = temp;
		}
	}

	void delend()
	{
		circular* p = root;
		if (root == NULL)
		{
			cout << "List is empty";
		}
		else
		{
			while (p->next->next != root)
			{
				p = p->next;
			}
			p->next->next = NULL;
			p->next = root;

		}
	}
		
		void delbeg()
		{
			circular *p=root;
			while (p->next != root)
			{
				p = p->next;
			}
			p->next = root->next;
			root = root->next;
			
			
		}

		void delpos(int pos)
		{
			if (pos > length())
			{
				cout << "Ïnvalid position";
				cout << "List has" << length() << "nodes";
			}
			else if (pos == 1)
			{
				delbeg();
			}
			else
			{
				circular* p = root;
				int i = 1;
				while (i < pos-1)
				{
					p = p->next;
					i++;
				}
				p->next = p->next->next;
			}
		}
};