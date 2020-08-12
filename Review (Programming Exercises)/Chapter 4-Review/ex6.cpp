// ex6.cpp -- the exercise No.6 in Chapter 4
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	struct CandyBar
	{
		string brand;
		double weight;
		int calorie;
	};
	
	CandyBar snacks[3]
	{
		{"Mocha Munch", 2.3, 350},
		{"Chocolate", 3.3, 450},
		{"Nut", 5.3, 550}
	};
	
	cout << "Snack1 name: " << snacks[0].brand << endl;
	cout << "Snack1 weight: " << snacks[0].weight << endl;
	cout << "Snack1 calorie: " << snacks[0].calorie << endl;

	cout << "Snack2 name: " << snacks[1].brand << endl;
	cout << "Snack2 weight: " << snacks[1].weight << endl;
	cout << "Snack2 calorie: " << snacks[1].calorie << endl;

	cout << "Snack3 name: " << snacks[2].brand << endl;
	cout << "Snack3 weight: " << snacks[2].weight << endl;
	cout << "Snack3 calorie: " << snacks[2].calorie << endl;
	
	cin.get();
	return 0;
}