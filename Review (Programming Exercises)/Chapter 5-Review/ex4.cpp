// ex4.cpp -- ex4
#include <iostream>
int main()
{
	using namespace std;
	const double x = 0.10;
	const double y = 0.05;
	double a = 100;
	double b = 100;
	int i = 0;
	while (a >= b)
	{
		a += (100 * x);
		b *= (1 + y);
		i++;
	}
	cout << "After " << i << " years, " << endl;
	cout << "Cleo's money is " << b << endl;
	cout << "Daphne's money is " << a << endl;
	return 0;
}
