#include<iostream>
using namespace std;

int main_24()
{
	int arr[50], num, i=0,a,r=0;

	cout << "Enter the number: ";
	cin >> num;

	while (num != 0)
	{
		a = num % 10;
		r = r + a * pow(2, i);
		i++;
		num = num / 10;
	}
	cout << r;
	return 0;
}