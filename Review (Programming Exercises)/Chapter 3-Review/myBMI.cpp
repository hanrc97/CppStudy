// myBMI.cpp -- calculate the BMI
#include <iostream>
int main()
{
	using namespace std;
	int ft, in, pds;
	double height, weight;
	const int Ft2in = 12;
	const double In2m = 0.0254;
	const double Pds2kg = 1.0 / 2.2; 
	cout << "Enter your height(the foot part):________\b\b\b\b\b";
	cin >> ft;
	cout << "Enter your height(the inch part):________\b\b\b\b\b";
	cin >> in;
	cout << "Enter your weight(unit: pounds):________\b\b\b\b\b";
	cin >> pds;
	height = (ft * Ft2in + in) * In2m;
	weight = pds * Pds2kg;
	double BMI = weight / (height * height);
	cout << "Your BMI is: " << BMI;
	cin.get();
	cin.get();
	return 0;
}