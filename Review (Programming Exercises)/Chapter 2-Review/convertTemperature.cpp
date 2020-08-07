//convertTemperature.cpp -- convert the Fahrenheit to the Celsius.

#include <iostream>;
double TempConvert(double);

int main()
{
	using namespace std;

	double temp;
	double ctemp;
	cout << "Please enter a Celsious value: ";
	cin >> temp;
	ctemp = TempConvert(temp);
	cout << temp << " degrees Celsious is " 
		 << ctemp << " degrees Fahrenheit";
	cin.get();
	cin.get();
	return 0;
}

double TempConvert(double t)
{
	using namespace std;

	double ct = t * 1.8 + 32;
	return ct;
}