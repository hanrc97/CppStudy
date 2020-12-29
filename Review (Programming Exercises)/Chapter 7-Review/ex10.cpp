// ex10.cpp -- design a calculate() function
#include <iostream>
double calculate(double x, double y, double (*f)(double, double));
double add(double x, double y);
double subt(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);


int main()
{
    using namespace std;
    double x, y;
    cout << "Enter two numbers: \n";
    while(cin >> x >> y)
    {
        double q1 = calculate(x, y, add);
        double q2 = calculate(x, y, subt);
        double q3 = calculate(x, y, multiply);
        double q4 = calculate(x, y, divide);
        cout << x << " + " << y << " = " << q1 << endl;
        cout << x << " - " << y << " = " << q2 << endl;
        cout << x << " × " << y << " = " << q3 << endl;
        cout << x << " ÷ " << y << " = " << q4 << endl;
        cin.get();
    }
    
    return 0;
}

// design a function: calculate()
// it takes three arguments: two double type, 
// and a pointer to a function which takes two double type arguments
// and return a double rvalue.
double calculate(double x, double y, double (*f)(double, double))
{
    return f(x, y);
}

double add(double x, double y)
{
    return x + y;
}

double subt(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    return x / y;
}