// carmiles.cpp - the relationship between miles and gasoline
#include <iostream>
int main()
{
	using namespace std;
	double miles, gasoline;
	const int Pcent = 100;
	cout << "Enter the miles(km): ";
	cin >> miles;
	cout << "Enter the gasoline(L): ";
	cin >> gasoline;
	double consum = gasoline / (miles / Pcent) ;
	cout << consum << "L per hundred km.";
	cin.get();
	cin.get();
	return 0;
}