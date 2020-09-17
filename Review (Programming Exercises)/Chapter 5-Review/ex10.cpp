// ex10.cpp -- ex10
#include <iostream>
int main()
{
	using namespace std;
	int rows;
	cout << "Enter the amount of rows that you want to display: ";
	cin >> rows;
	int i, j, m;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < (rows - 1 - i); j++)
		{
			cout << ".";
		}
		for (m = 0; m <= i; m++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
