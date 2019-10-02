#include<iostream>
using namespace std;

int main()
{
	int n, i, flag = 0;
	cin >> n;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}
	if (n == 1)
	{
		cout << "1 is neither prime nor composite";
	}
	else if (flag == 0)
	{
		cout << n << " is a prime no.";
	}
	else
	{
		cout << n << " is not a prime no.";
	}
	return 0;
}