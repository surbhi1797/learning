#include<iostream>
using namespace std;

int main_22()
{
	int arr[50] = { 10,20,30,40,10,50,60,10,20,20};
	int i,j,count=1,temp=0,tempcount=0,popular=arr[0];

	for (i = 0; i < 10; i++)
	{
		temp = arr[i];
		tempcount++;
		for (j = i+1; j < 10; j++)
		{
			if (arr[j]==temp)
			{
				tempcount++;
				if (tempcount > count)
				{
					popular = temp;
					count = tempcount;
				}
			}
		}
	}
	cout << popular;
	return 0;
}