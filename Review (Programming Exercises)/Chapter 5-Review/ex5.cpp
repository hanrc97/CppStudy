// ex5.cpp -- ex5
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	int sales[12];
	long sum = 0;
	string m[12] = {"Jan.", "Feb.", "Mar.", "Apr.", "May", "Jun.", "Jul.", "Aug.", "Sept.", "Oct.", "Nor.", "Dec."};
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the sales of " << m[i] << ":_____\b\b\b";
		cin >> sales[i];
		sum += sales[i];
	}
	cout << "The sales of the whole year is: " << sum << endl;
	cout << "Monthly sales are as follows:" << endl;
	for (int i = 0; i < 12; i++)
	{
		cout << m[i] << ": " << sales[i] << endl;
	}
	return 0;
}
