//long2yard.cpp -- convert "long" to "yard"

#include <iostream>;

int main()
{
	using namespace std;

	double x;
	double y;
	cout << "Please enter the x (long): ";
	cin >> x;
	y = x * 220;
	cout << x << " long equals " << y << " yard.";
	cin.get();
	cin.get();
	return 0;
}