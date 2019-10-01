#include<iostream>
using namespace std;

int main_23()
{
	int arr[50], num, i;

	cout << "Enter the number: ";
	cin >> num;
	for (i = 0; num > 0; i++)
	{
		arr[i] = num % 2;
		num = num / 2;
	}
	cout << "Binary of " << num << "is: ";
	for (i = i - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
	return 0;
}