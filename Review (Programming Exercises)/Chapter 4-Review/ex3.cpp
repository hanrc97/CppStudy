// ex3.cpp -- the exercise No.3 in Chapter 4
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char fname[20], lname[20];
	cout << "Enter your first name: ";
	cin.getline(fname, 20);
	cout << "Enter your last name: ";
	cin.getline(lname, 20);
	cout << "Here's the information in a single string: " << strcat(strcat(lname, ", "), fname);
	cin.get();
	return 0;
}