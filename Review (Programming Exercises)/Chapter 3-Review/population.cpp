// population.cpp -- displays the USA's population and world's population
#include <iostream>
int main()
{
	using namespace std;
	long long usap,worldp;
	const int Pcent = 100;
	cout << "Enter the world's popluation: ";
	cin >> worldp;
	cout << "Enter the USA's population: ";
	cin >> usap;
	double pp = double(usap) / double(worldp) * Pcent;
	cout << "The population of the US is " << pp << "% of the world population.";
	cin.get();
	cin.get();
	return 0;
}