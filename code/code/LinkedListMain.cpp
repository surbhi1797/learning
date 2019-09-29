#include<iostream>
#include<stdlib.h>
#include "LinkedList.cpp"

using namespace std;

int main_12()
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
	ll->addafter(2, 19);
	ll->addmiddle(40);
	ll->display();
	ll->addbegin(15);
	ll->append(13);
	ll->display();
	//ll->delbeg();
	//ll->delpos(ll->length());
	//ll->display();
	cout<<"Middle of list is: "<<ll->mid()<<endl;
	cout << "Data is: " << ll->poslast(2)<<endl;
	ll->revlist();
	ll->display();
	ll->sort();
	ll->display();

	return 0;
}