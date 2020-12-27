// ex5.cpp -- recursion function
#include <iostream>
long factorial(int n);
using namespace std;

int main()
{
    int n;
    cout << "Enter the parameter n to calculate the factorial: ";
    cin >> n;
    long results = factorial(n);
    cout << "The factorial of " << n << " is " << results << endl;
    return 0;
}

long factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial (n - 1); // recursion here
}