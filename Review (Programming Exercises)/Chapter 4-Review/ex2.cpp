// ex2.cpp -- the exercise No.2 in Chapter 4
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string name;
	string dessert;
	
	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	cin.get();
	return 0;
}