#include<iostream>
using namespace std;

int main_17()
{
	int arr[5] = { 10,20,30,40,50 };
	int key = 50,i,flag=0;
	for (i = 0; i < 5; i++)
	{
		if (key == arr[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		cout << "Key is found";
	else
		cout << "Key is not found";
	return 0;
}