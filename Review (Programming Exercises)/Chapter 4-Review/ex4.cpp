// ex4.cpp -- the exercise No.4 in Chapter 4
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string fname, lname;
	cout << "Enter your first name: ";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin, lname);
	cout << "Here's the information in a single string: " << lname + ", " + fname << endl;
	cin.get();
	return 0;
}