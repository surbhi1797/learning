#include<iostream>
using namespace std;

int main_16()
{
	int arr[5] = { 10,20,30,40,50 };
	int key = 60,mid;
	int low = 0, high = 4, flag = 0;

	while (low <=high)
	{
		mid = (low + high) / 2;
		if (key == arr[mid])
		{
			flag = 1;
			break;
		}
		else if (key < arr[mid])
			high =mid - 1;
		else
			low = mid + 1;
	}
	if (flag == 1)
		cout << "key is found";
	else
		cout << "key is not found";
	return 0;
}