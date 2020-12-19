// daytime.cpp -- displays time in days, hours, minutes and seconds.
#include <iostream>
int main()
{
	using namespace std;
	long long s;
	const int D2h = 24;
	const int H2m = 60;
	const int M2s = 60;
	cout << "Enter the number of seconds: ";
	cin >> s;
	int days = int (s / M2s / H2m / D2h);
	int hours = int ((s % (M2s * H2m * D2h)) / M2s / H2m);
	int minutes = int ((s % (M2s * H2m)) / M2s);
	int seconds = int (s % M2s);
	cout << days << " days, " << hours << " hours, " 
			 << minutes << " minutes, " << seconds << " seconds."; 
	cin.get();
	cin.get();
	return 0;
}