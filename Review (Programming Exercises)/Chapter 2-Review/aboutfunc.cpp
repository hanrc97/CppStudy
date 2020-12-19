//aboutfunc.cpp -- defining two user's functions

#include <iostream>;
void func1();
void func2();

int main()
{
	using namespace std;

	func1();
	func1();
	func2();
	func2();
	cin.get();
	return 0;
}

void func1()
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void func2()
{
	using namespace std;
	cout << "See how they run" << endl;
}