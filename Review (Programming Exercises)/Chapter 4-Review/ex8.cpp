// ex8.cpp -- the exercise No.8 in Chapter 4
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
	
	pizza * pt = new pizza;
	cout << "Enter the pizaa's size: ";
	cin >> (*pt).size;
	//cin >> pt->size;
	cout << "Enter the pizaa's company: ";
	cin >> (*pt).company;
	//cin >> pt->company;
	cout << "Enter the pizaa's weight:";
	cin >> (*pt).weight;
	//cin >> pt->company;
	cout << "Pizaa's company: " << pt->company << endl;
	cout << "Pizaa's size: " << pt->size << endl;
	cout << "Pizaa's weight: " << pt->weight << endl;
	delete pt;
	cin.get();
	cin.get();
	return 0;
}