// ex5.cpp -- the exercise No.5 in Chapter 4
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
	
	CandyBar snack
	{
		"Mocha Munch",
		2.3,
		350
	};
	
	cout << "Snack name: " << snack.brand << endl;
	cout << "Snack weight: " << snack.weight << endl;
	cout << "Snack calorie: " << snack.calorie << endl;
	cin.get();
	return 0;
}