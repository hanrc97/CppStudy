//voidfunc.cpp -- understands the void function

#include <iostream>;
void func(int, int);

int main()
{
	using namespace std;

	int hours;
	int minutes;
	cout << "Please enter the number of hours: ";
	cin >> hours;
	cout << "Please enter the number of minutes: ";
	cin >> minutes;
	func(hours, minutes);
	cin.get();
	cin.get();
	return 0;
}

void func(int h, int m)
{
	using namespace std;

	cout << "Time: " << h << ":" << m;
}