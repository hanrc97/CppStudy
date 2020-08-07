//lightyear.cpp -- convert the light year to the astronomical units.

#include <iostream>;
double UnitConvert(double);

int main()
{
	using namespace std;

	double lightyr;
	double astro;
	cout << "Please enter the number of light years: ";
	cin >> lightyr;
	astro = UnitConvert(lightyr);
	cout << lightyr << " light years = " 
		 << astro << " astronomical units.";
	cin.get();
	cin.get();
	return 0;
}

double UnitConvert(double yr)
{
	using namespace std;

	double asunit = yr * 63240;
	return asunit;
}
