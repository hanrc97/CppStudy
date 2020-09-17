// ex7.cpp -- ex7
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	struct car
	{
		string maker;
		int year;
	};
	int num;
	cout << "How many cars do you have: ";
	(cin >> num).get();
	car * p = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Enter the maker: ";
		getline(cin, p[i].maker);
		cout << "Enter the year of the car: ";
		(cin >> p[i].year).get();
	}
	cout << "Here is your collection: " << endl;
	for (int i = 0; i < num; i++)
		cout << p[i].year << " " << p[i].maker << endl;
	delete [] p;
	return 0;
}
