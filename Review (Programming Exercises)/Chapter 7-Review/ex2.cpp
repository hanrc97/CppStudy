// ex2.cpp -- input, show and calculate the scores
#include <iostream>
int input(double scores[], int length);
void show(double scores[], int length);
double cal(double scores[], int length);
using namespace std;

int main()
{
    int size = 10;
    double scores[size];
    int length = input(scores, size);
    show(scores, length);
    double results = cal(scores, length);
    cout << "\nThe average scores is " << results << endl;
    cin.get();
    return 0;
}

int input(double scores[], int size)
{
    int length;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the scores #" << i + 1 << "(up to 10, -1 to quit): ";
        cin >> scores[i];
        if (scores[i] < 0)
        {
            scores[i] = 0;
            length = i - 1;
            break;
        }
        else
        {
            length = size;
        }
    }
    return length;
}

void show(double scores[], int length)
{
    cout << "All scores are here:\n";
    for(int i = 0; i <= length; i++)
    {
        if(i <= 9)
            cout << scores[i] << "  ";
    }
}

double cal(double scores[], int length)
{
    int i = 0;
    double sum = 0.0;
    while(i <= length)
    {
        sum += scores[i];
        i++;
    }
    double average = sum / double(i);
    return average;
}