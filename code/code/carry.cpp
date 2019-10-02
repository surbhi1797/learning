#include<iostream>
using namespace std;

int main_27()
{
	int t;
	cout << "Enter no. of cases";
	cin >> t;
	while (t--)
	{
		int a, b, c, d, p = 1, total = 0, carry = 0;
		cout << endl << "Enter two no. : ";
		cin >> a >> b;
		while (a > 0 || b > 0)
		{
			c = (a % 10) + (b % 10);
			d = c % 10;
			total = total + (p * (d+carry));
			p = p * 10;
			a = a / 10;
			b = b / 10;
			if (c <= 9)
			{
				carry = 0;
			}
			else
				carry = 1;
			carry = carry + 1;
		}
		cout << total << endl;
	}
	return 0;
}