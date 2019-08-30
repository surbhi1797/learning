#include<iostream>
#include<stdlib.h>
#include "LinkedList.cpp"

using namespace std;

int main()
{	
	/*int data;
	cout << "Enter node data";
	cin >>data;*/
	LinkedList* ll = new LinkedList();
	cout <<"Length= "<< ll->length() << endl;
	ll->append(1);
	ll->append(2);
	cout << "Length= " << ll->length() << endl;
	ll->append(3);
	ll->display();
	return 0;
}