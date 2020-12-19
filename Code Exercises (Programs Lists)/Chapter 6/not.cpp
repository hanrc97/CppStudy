// not.cpp -- using the not operator
#include <iostream>
#include <climits>
bool is_int(double); // a function prototype
int main()
{
    using namespace std;
    double num;

    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while(!is_int(num)) // continue while num is not int-able
    {
        cout << "Out of range (" << INT_MIN << "~" << INT_MAX << ")" << "please try again: ";
        cin >> num;
    }
    int val = int (num); // type cast
    cout << "You've entered the integer " << val << "\nBye\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)   //use climits values
        return true;
    else
        return false;
}