// ex1.cpp -- the exercise No.1 in Chapter 4
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string fname, lname;
	char grade;
	int age;
	
	cout << "What is your first name? ";
	getline(cin, fname);
	cout << "What is your last name? ";
	getline(cin, lname);
	cout << "What letter grade do you deserve?(A, B or C) ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;
	cin.get();
	cin.get();
	return 0;
}