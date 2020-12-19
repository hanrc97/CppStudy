// ex2.cpp -- non-numeric exit
#include <iostream>
const int ArSize = 10;

int main()
{
    using namespace std;
    double donation[ArSize];

    cout << "Enter the value of donation (up to 10) # 1: ";
    int i = 0;
    int count = 0;
    double sum = 0.0;
    double average = 0.0;
    while (i < ArSize && cin >> donation[i])
    {
        sum += donation[i];
        average = sum / (i + 1);
        i++;
        cout << "Enter the value of donation (up to 10) # "<< i + 1 << ": ";
    }
    for (int j = 0; j <= i; j++)
        if (donation[j] > average)
            count++;
    cout << "You enter the " << i << " valid numbers" << endl;
    cout << "The average is " << average 
            << ", and there are(is) " << count << "number(s) bigger than the average";
    return 0;
}