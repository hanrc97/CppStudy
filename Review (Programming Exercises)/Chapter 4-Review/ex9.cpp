// ex9.cpp -- the exercise No.9 in Chapter 4
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
	
	CandyBar * ps = new CandyBar [3];
	ps[0] = {"Mocha Munch", 2.3, 350};
	ps[1] = {"Chocolate", 3.3, 450};
	ps[2] = {"Nut", 5.3, 550};
	
	cout << "Snack1 name: " << ps[0].brand << endl;
	cout << "Snack1 weight: " << ps[0].weight << endl;
	cout << "Snack1 calorie: " << ps[0].calorie << endl;

	cout << "Snack2 name: " << ps[1].brand << endl;
	cout << "Snack2 weight: " << ps[1].weight << endl;
	cout << "Snack2 calorie: " << ps[1].calorie << endl;

	cout << "Snack3 name: " << ps[2].brand << endl;
	cout << "Snack3 weight: " << ps[2].weight << endl;
	cout << "Snack3 calorie: " << ps[2].calorie << endl;
	delete [] ps;
	cin.get();
	return 0;
}