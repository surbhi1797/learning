#include<iostream>
#include<stdlib.h>
#include"CircularLinkedList.cpp"

using namespace std;

void  main_5()
{

	CircularLinkedList* cll = new CircularLinkedList;

	cll->append(1);
	cll->append(2);
	cll->append(3);
	cll->append(4);
	cll->addbeg(0);
	cll->addpos(15, 2);
	cll->display();
	cll->delend();
	cll->delbeg();
	cll->display();
	cll->delpos(3);
	cll->display();
	cout << cll->length();

}