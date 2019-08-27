#include<iostream>

using namespace std;

int fibonacci(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main_1()
{
	cout << "\n---------------------------\n" << fibonacci(5);
	return 0;
}