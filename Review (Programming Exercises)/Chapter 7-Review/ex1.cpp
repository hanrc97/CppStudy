// ex1.cpp -- calculate the harmonic average
#include <iostream>
double hmean(int x, int y);

int main()
{
    using namespace std;
    cout << "Enter two number (when one number is 0, quit): " << endl;
    int x, y;
    while (cin >> x >> y)
    {
        if (x == 0 or y == 0)
            break;
        else
        {
            double results = hmean(x, y);
            cout << "The Harmonic Average is: " << results;
        }
    }
    return 0;
}

double hmean(int x, int y)
{
    double results = 2.0 * x * y / (x + y);
    return results;
}

