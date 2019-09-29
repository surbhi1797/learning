#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main_13() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, arr[50], i, count = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < (n-1); i++)
	{
		if (arr[i] == arr[i+1])
		{
			count++;
		}
	}
	cout<< count;

	return 0;
}