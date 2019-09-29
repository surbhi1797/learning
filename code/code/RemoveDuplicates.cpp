#include<iostream>
using namespace std;
 
int main_14()
{
	int list[10] = { 3,1,2,1,6,2,4,8,3,1 };
	int hash[10],k,max=9,i,j;
	
	for (i = 0; i < 10; i++)
	{
		hash[i] = 0;
	}
	for (i = 0, j = 0; i < 10; i++)
	{
		k = list[i];
		if (hash[k] == 0 && k != 0)
		{
			hash[k] = k;
			list[j] = hash[k];
			cout << list[j]<<"\t";
			j++;
		}
		else
		{
			list[max] = 0;
			max--;
		}	
	}
	cout << endl;
	return 0;
}