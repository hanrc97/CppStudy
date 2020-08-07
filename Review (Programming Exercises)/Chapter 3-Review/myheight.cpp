// myheight.cpp -- convert your height from celimeter(s) to meter(s) and celimeter(s)
#include <iostream>
int main()
{
	using namespace std;
	int height;
	const int Factor = 100;
	cout << "Enter your height(cm):________\b\b\b\b\b\b";
	cin >> height;
	int mheight = height / Factor;
	int cmheight = height % Factor;
	cout << height << " cm is " << mheight << "m" << cmheight << "cm.";
	cin.get();
	cin.get();
	return 0;
} 