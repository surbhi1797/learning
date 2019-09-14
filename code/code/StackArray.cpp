#include<iostream>
#include<stdlib.h>
#define CAPACITY 5
using namespace std;

class StackArray
{
public:
	int top = -1;
	int stack[CAPACITY];

	bool IsFull()
	{
		if (top == CAPACITY - 1)
			return true;
		else
			return false;
	}

	void push(int data)
	{
		if (IsFull())
		{
			cout << "Stack is full"<<endl;
		}
		else
		{
			top++;
			stack[top] = data;
			cout << "Element " << data << " has been inserted"<<endl;
		}
	}

	bool IsEmpty()
	{
		if (top == -1)
			return true;
		else
			return false;
	}
	int pop()
	{
		int data=0;
		if (IsEmpty())
		{
			cout << "Stack is Empty"<<endl;
		}
		else
		{
			data = stack[top];
			top--;
			cout << "element " << data << " is popped"<<endl;
		}
		return data;
	}

	void peek()
	{
		if (IsEmpty())
		{
			cout << "Stack is empty"<<endl;
		}
		else
		{
			cout << "Top element is: " << stack[top] << endl;
		}
	}


	void display()
	{
		if (top == -1)
		{
			cout << "Stack is empty" << endl;
		}
		else
		{
			for (int i = 0; i <= top; i++)
			{
				cout << stack[i] << "->";
			}
			cout << endl;
		}
	}
};