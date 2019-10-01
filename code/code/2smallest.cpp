#include<iostream>
#include<limits.h>
using namespace std;

int main_21()
{
	int arr[6] = { 50,60,70,80,90,100 };
	int i, first, second, third;
	third = second = first = INT_MAX;

	for (i = 0; i < 6; i++)
	{
		if (arr[i] < first)
		{
			third = second;
			second = first;
			first = arr[i];
		}
		else if (arr[i] < second)
		{
			third = second;
			second = arr[i];
		}
		else if (arr[i] < third)
		{
			third = arr[i];
		}
	}
	cout << "Three largest elements are:" << endl << first << endl << second << endl << third;
	return 0;

}
