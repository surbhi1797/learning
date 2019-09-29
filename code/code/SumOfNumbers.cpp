#include<iostream>
#include<stdlib.h>
using namespace std;

void main_13()
{
	int n = 121, p,r=0, q;
	q = n;
	while(q!=0)
	{
		p = q % 10;
		r = (r*10) + p;
		q = q / 10;


	}
	cout << "R: " << r<<endl;
	if (r == n)
	{
		cout << "yes";
	}
	else
		cout << "no";
}