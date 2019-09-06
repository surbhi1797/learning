#include<iostream>
using namespace std;



class DoublyLinkedList
{
public:
	struct doubly
	{
		doubly* left, * right;
		int data;
	};

	doubly* root = NULL;
	
	void append(int data)
	{
		doubly* temp;

		temp = new doubly;
		temp->left = NULL;
		temp->right = NULL;
		temp->data=data;
		if (root == NULL)
		{
			root = temp;
		}

		else
		{
			doubly* p=root;
			while (p->right != NULL)
			{
				p = p->right;
			}
			
			temp->left = p;
			temp->right = NULL;
			p->right = temp;
		}

		
	}

	void display()
	{
		doubly* temp;
		temp = root;

		if (temp == NULL)
		{
			cout << "List is empty";
		}

		else
		{
			while (temp != NULL)
			{
				cout << temp->data << endl;
				temp = temp->right;
			}
			cout << "----------------------" << endl;
		}
	}

	void addbeg(int data)
	{
		doubly* temp;

		temp=new doubly;

		temp->left = NULL;
		temp->right = NULL;

		temp->data=data;
		

		if (root == NULL)
		{
			root = temp;
		}
		else
		{
			
			temp->right = root;
			root->left = temp;
			root = temp;

		}

	}

	void displayRev()
	{
		doubly* temp;
		temp = root;

		if (temp == NULL)
		{
			cout << "List is empty";
		}

		else
		{
			while (temp->right != NULL)
			{
				
				temp = temp->right;
			}

			while (temp != NULL)
			{
				cout << temp->data << endl;
				temp = temp->left;
			}
			
			cout << "----------------------" << endl;
		}
	}

	int length()
	{
		doubly* temp = root;
		int count=0;

		while (temp != NULL)
		{
			count++;
			temp = temp->right;
			
		}

		return count;
	}

	void addPos(int data, int pos)
	{
		doubly* temp;

		temp = new doubly;
		temp->data = data;
		temp->left = NULL;
		temp->right = NULL;

		if (pos > length())
		{
			cout << "Invalid location";
			cout << "List has" << length() << "nodes";
		}

		else if (pos == 1)
		{
			addbeg(data);
		}

		else 
		{
			doubly* p=root;
			int i = 1;
			while (i < pos-1)
			{
				p = p->right;
				i++;
			}
			temp->right = p->right;
			p->right->left = temp;
			p->right = temp;
			temp->left = p;
		}

	}
}; 