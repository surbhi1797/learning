#include<iostream>
#include<string>
using namespace std;

int main_18()
{
	int i, j;	
	string str;
	char temp;

	cout << "Enter a string" << endl;
	getline(cin, str);
	j = (str.length())-1;
	for (i = 0; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	
	}
	cout << "Reverse: " << str;
	return 0;
}
