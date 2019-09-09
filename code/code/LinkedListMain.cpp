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
	//ll->addafter(2, 9);
	ll->addmiddle(11);
	ll->addbegin(15);
	ll->append(13);
	ll->display();
	//ll->delbeg();
	//ll->delpos(ll->length());
	//ll->display();
	cout<<"Middle of list is: "<<ll->mid()<<endl;
	cout << "Data is: " << ll->poslast(4)<<endl;
	ll->revlist();
	ll->display();
	ll->sort();
	ll->display();

	return 0;
}