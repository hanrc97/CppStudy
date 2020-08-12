// ex7.cpp -- the exercise No.7 in Chapter 4
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	struct pizza
	{
		string company;
		int size;
		double weight;
	};
	
	pizza p;
	cout << "Enter the pizaa's company: ";
	cin >> p.company;
	cout << "Enter the pizaa's size: ";
	cin >> p.size;
	cout << "Enter the pizaa's weight:";
	cin >> p.weight;
	cout << "Pizaa's company: " << p.company << endl;
	cout << "Pizaa's size: " << p.size << endl;
	cout << "Pizaa's weight: " << p.weight << endl;
	cin.get();
	cin.get();
	return 0;
}