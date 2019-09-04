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
		}
	}
};