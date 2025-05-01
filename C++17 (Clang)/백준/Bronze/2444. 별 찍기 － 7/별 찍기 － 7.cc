#include <iostream>
using namespace std;
int main()
{
	int input;
	int i,j;

	cin >> input;

	for (i = 1; i <= input; i++)
	{
		for (j = input - i; j > 0; j--)
		{
			cout << ' ';
		}
		for (j = 0; j < i * 2 - 1; j++)
		{
			cout << '*';
		}
		cout << endl;
	}


	for (i = 1; i < input; i++)
	{
		for (j = 0; j < i; j++)
		{
			cout << ' ';
		}
		for (j = 0; j < (input-i)*2-1; j++)
		{
			cout << '*';
		}
		cout << endl;
	}


}

