#include<iostream>
#include<stdlib.h>
using namespace std;
#include "StackArray.cpp"

int main_9()
{
	StackArray *sa = new StackArray;

	sa ->pop();
	sa->push(0);
	sa->push(1);
	sa->push(2);
	sa->push(3);
	sa->push(4);
	sa->push(5);
	sa->display();
	sa->pop();
	sa->display();
	sa->peek();

	return 0;
}