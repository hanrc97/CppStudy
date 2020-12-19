// review-ex15.cpp 
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	struct fish
	{
		string type;
		int weight;
		double length;
	};
	
	fish * f = new fish;
	f->type = "seafish";
	f->weight = 10;
	f->length = 10.3;
	cout << (*f).type << endl << (*f).weight << endl << (*f).length << endl;
	delete f;
	cin.get();
	return 0;
}