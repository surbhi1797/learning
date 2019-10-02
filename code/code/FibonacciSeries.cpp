#include<iostream>
using namespace std;

int fibonacci1(int n)
{
	if (n <= 1)
		return 1;
	else
		return fibonacci1(n - 1) + fibonacci1(n - 2);
}

int fibonacci_loop(int n)
{
	int t1 = 0, t2 = 1, total = 0, i;
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return t1;
		else if (n == 1)
			return t2;
		else
		{
			total = t1 + t2;
			t1 = t2;
			t2 = total;
		}
		
	}
	return total;
	
}

int main_26()
{
	int n;
	cout << "Enter a positive integer"<<endl;
	cin >> n;
	//cout << fibonacci1(n);
	cout << fibonacci_loop(n);
	return 0;
}