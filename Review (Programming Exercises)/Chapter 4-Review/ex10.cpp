// ex10.cpp -- the exercise No.10 in Chapter 4
#include <iostream>
#include <array>
int main()
{
	using namespace std;
	array<double, 3> secgrade;
	cout << "Enter the first 40m grade: ";
	cin >> secgrade[0];
	cout << "Enter the second 40m grade: ";
	cin >> secgrade[1];
	cout << "Enter the third 40m grade: ";
	cin >> secgrade[2];
	cout << "The average 40m grade: " << (secgrade[0] + secgrade[1] + secgrade[2]) / 3 << " (s)";
	cin.get();
	cin.get();
	return 0;
}