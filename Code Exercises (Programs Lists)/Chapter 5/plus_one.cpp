// plus_one.cpp -- the increment operator
#include <iostream>
int main()
{
	using std::cout;
	using std::cin;
	int a = 20;
	int b = 20;
	cout << "a	 =" << a << ":	b= " << b << "\n"; //a=20:b=20
	cout << "a++ =" << a++ << ": ++b = " << ++b << "\n"; //a++=20:++b = 21
	cout << "a	 =" << a << ":	b= " << b << "\n"; //a=21:b=21
	cin.get();
	return 0;
}