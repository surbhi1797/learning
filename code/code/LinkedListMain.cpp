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

	ll->append(1);
	ll->append(2);
	ll->append(3);
	ll->display();
	return 0;
}