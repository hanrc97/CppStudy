// ex3.cpp -- ex3
#include <iostream>
int main()
{
	using namespace std;
	int x;
	int sum = 0;
	do
	{
		cout << "Enter a number('0' represents end):_____\b\b\b";
		cin >> x;
		sum += x;
		cout << "Now the sum value is " << sum << endl;
	}
	while (x != 0);
	return 0;
}
