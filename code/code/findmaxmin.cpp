#include<iostream>
using namespace std;

int main_15()
{
	int arr[10] = {2,22,3,5,7,9,8,12,45,56 };
	int min, max,bmin,bmax;

	min = max = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			
			max = arr[i];

		}
		if (min > arr[i])
		{
			
			min = arr[i];
		}
	}
	cout << "Greatest: " << max<<endl;
	
	cout << "Smallest: " << min<<endl;
	
	return 0;
}