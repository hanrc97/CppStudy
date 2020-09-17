                                                                                                                                                                                                                                                                                                       // ex1.cpp -- sum the values between the one number and the other
#include <iostream>
int main()
{
	using namespace std;
	int x, y;
	int m;
	int sum = 0;
	cout << "Enter a number(the smaller one):___\b\b";
	cin >> x;
	cout << "Enter a number again(the bigger one):___\b\b";
	cin >> y;
	for (x; x <= y; x++)
		sum = sum + x;
	cout << "The sum value is " << sum << "." << endl;
	for (int i = 1; i <= 64; i *= 2)
		cout << i << endl;
	return 0;
}
