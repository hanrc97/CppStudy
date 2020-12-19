// latitude.cpp -- convert to degrees
#include <iostream>
int main()
{
	using namespace std;
	int d, m, s;
	const int Factor = 60;
	cout << "Enter a latitude in degrees, minutes, and seconds\n";
	cout << "First, enter the degrees: ";
	cin >> d;
	cout << "Second, enter the minutes: ";
	cin >> m;
	cout << "Third, enter the seconds: ";
	cin >> s;
	double degrees = double (d) + double (m) / Factor + double (s) / (Factor * Factor);
	cout << d << " degrees, " << m << " minutes, " << s << " seconds = "
			 << degrees << " degrees";
	cin.get();
	cin.get();
	return 0;
}