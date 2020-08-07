//age2month.cpp -- conver the age to the month unit.

#include <iostream>;

int main()
{
	using namespace std;

	int age;
	int month;
	cout << "Please enter your age: ";
	cin >> age;
	month = age * 12;
	cout << age << " years old means that you have experienced " 
		 << month << " months.";
	cin.get();
	cin.get();
	return 0;
}