// ex5.cpp -- tax
#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter your salary: (tvarps)\n";
    int salary;
    double tax;
    while (cin >> salary && salary >= 0)
    {
        if (salary <= 5000)
            cout << "tax = 0" << " tvarps\n";
        else if (salary >= 5001 && salary <= 15000){
            tax = salary * 0.1;
            cout << "tax = " << tax << " tvarps\n";
        }
        else if (salary >= 15001 && salary <= 35000){
            tax = salary * 0.15;
            cout << "tax = " << tax << " tvarps\n";
        }
        else{
            tax = salary * 0.3;
            cout << "tax = " << tax << " tvarps\n";
        }
    }
    return 0;
}