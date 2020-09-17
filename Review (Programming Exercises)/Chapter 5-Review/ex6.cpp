// ex6.cpp -- ex6
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string month[12] = {"Jan", "Feb", "Mar", "Apr"
        , "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"};
	int sales[3][12];
	int sum, sum1, sum2, sum3;
	sum = sum1 = sum2 = sum3;

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			cout << "Enter the sales of " << month[i] << ":";
			cin >> sales[j][i];
		}
	}
	
	int i = 0;
	while (i < 12)
	{
		sum1 += sales[0][i];
		sum2 += sales[1][i];
		sum3 += sales[2][i];
		i++;
	}
	sum = sum1 + sum2 + sum3;
	cout << "The first year's sales is" << sum1 << "." << endl;
	cout << "The second year's sales is" << sum2 << "." << endl;
	cout << "The third year's sales is" << sum3 << "." << endl;
	cout << "All three years' sales are" << sum << "." << endl;
	
	for (int j = 0; j < 3; j++)
	{
		cout << "No." << j + 1 << " year monthly sales are as follows:" << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << month[i] << ":" << sales[j][i] << endl;
		}
	}
	return 0;
}
