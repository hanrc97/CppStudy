// ex6.cpp -- arrays and functions
#include <iostream>
int Fill_array(double ar[], int size);
void Show_array(double ar[], int rsize);
void Reverse_array(double ar[], int rsize);
using namespace std;


int main()
{
    int size;
    cout << "Enter the size of your array: ";
    cin >> size;
    double ar[size];
    int rsize = Fill_array(ar, size);
    Show_array(ar, rsize);
    Reverse_array(ar, rsize);
    Show_array(ar, rsize);  // show again
    return 0;
}

int Fill_array(double ar[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        cout << "Enter the value #" << i + 1 << ": ";
        if(!(cin >> ar[i]))
        {
            i--;
            cout << "You actually enter the " << i + 1  << " numbers.\n";
            return i + 1;
        }
    }
    cout << "You actually enter the " << i  << " numbers.\n";
    return i; 
}

void Show_array(double ar[], int rsize)
{
    for(int i = 0; i < rsize; i++)
        cout << ar[i] << " ";
    cout << "\n";
}

void Reverse_array(double ar[], int rsize)
{
    double temp;
    for(int i = 0; i < rsize; i++, rsize--)
    {
        temp = ar[i];
        ar[i] = ar[rsize - 1];
        ar[rsize - 1] = temp;
    }
}