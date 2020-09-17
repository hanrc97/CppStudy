// ex2.cpp -- modify the program list 5.4 using array object.
// how to declare array: p120
#include <iostream>
#include <array>
const int ArSize = 101;
int main()
{
	using namespace std;
	array<long double, ArSize> arr;
	arr[1] = arr[0] = 1;
	for (int i = 2; i < ArSize; i++)
		arr[i] = i * arr[i-1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! =" << arr[i] << endl;
	return 0;
}
