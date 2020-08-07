// euandusa.cpp -- The conversion of The American method to the European method
#include <iostream>
int main()
{
	using namespace std;
	const double Hkm2miles = 62.14;
	const double G2l = 3.875;
	double eustyle, usastyle;
	cout << "Enter the EUstyle (L/100km): ";
	cin >> eustyle;
	usastyle = Hkm2miles / (eustyle / G2l);
	cout << eustyle << "L/100km = " << usastyle << " miles/gallon";
	cin.get();
	cin.get();
	return 0;
}