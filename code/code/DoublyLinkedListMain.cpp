#include<iostream>
#include<stdlib.h>
#include "DoublyLinkedList.cpp"

using namespace std;

int main()
{
	DoublyLinkedList* dll = new DoublyLinkedList();

	dll->append(1);
	dll->append(2);
	dll->append(3);
	dll->append(4);
	dll->addbeg(0);
	dll->display();
	//dll->displayRev();
	dll->addPos(20,3);
	dll->display();
	cout<<"Length of list is: "<<dll->length();

}