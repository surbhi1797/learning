#include<iostream>
using namespace std;

int main_19()
{
	int arr[50], i, n, max = 0;
	cout << "Enter no elements in array:";
	cin >> n;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	cout << endl << "Greatest element in array:" << endl << max;
	return 0;
}