// ex7.cpp -- modify the 3 functions in the arrfun3.cpp (use the pointers parameters)
// arrfun3.cpp -- array functions and const
#include <iostream>
const int Max = 5;

// function prototypes
double *fill_array(double ar[], int limit);
void show_array(double ar[], double *e); // unable to change data
void revalue(double r, double ar[], double *e);

int main()
{
    using namespace std;
    double properties[Max];

    double *e = fill_array(properties, Max);
    show_array(properties, e);
    if (*e > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, e);
        show_array(properties, e);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

double *fill_array(double ar[], int limit)  // return a pointer to the address of last one
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)   // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\b";
            break;
        }
        else if (temp < 0)  // signal to terminate
            break;
        ar[i] = temp;
    }
    return &ar[i];
}

void show_array(double ar[], double *e)
{
    using namespace std;
    int i = 0;
    for (double * s = ar; s != e; s++, i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar << endl;
    }
}

void revalue(double r, double ar[], double *e)
{
    for (double * s = ar; s != e; s++)
        (*ar) *= r;
}