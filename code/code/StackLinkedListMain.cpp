#include<iostream>
#include<stdlib.h>
using namespace std;
#include "StackLinkedList.cpp"

void main_10()
{
	StackLinkedList* sll = new StackLinkedList;

	sll->push(0);
	sll->push(1);
	sll->push(2);
	sll->push(3);
	sll->push(4);
	sll->display();
	sll->pop();
	sll->display();
}