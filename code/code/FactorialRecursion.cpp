#include<iostream>
using namespace std;

int fact(int n)
{
	if (n < 1)
		return 1;
	else
		return n * fact(n - 1);
}

int fact_loop(int n)
{
	int i,fact=1;
	for (i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return fact;
}
int main_25()
{
	int n;
	cout << "Enter a positive integer"<<endl;
	cin >> n;
	//cout<<fact(n);
	cout << fact_loop(n);
	return 0;
}