// pointer.cpp -- our first pointer variable
#include <iostream>
int main()
{
	using namespace std;
	int updates = 7;				//declare a variable
	int * p_updates;				//declare pointer to an int
	p_updates = &updates;		//assign address of int to pointer
	
	//express values in two ways
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	
	//express address in two ways
	cout << "Addresses: &updates = " << &updates;
	cout << ", *p_updates = " << p_updates << endl;
	
	//use pointer to change value
	*p_updates = *p_updates + 3;
	cout << "Now updates = " << updates;
	cout << ", its address = " << &updates << endl;
	cin.get();
	return 0;
}