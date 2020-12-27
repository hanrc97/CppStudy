// ex4.cpp -- 
// lotto.cpp -- probability of winning
#include <iostream>
long double probability(unsigned numbers, unsigned picks, unsigned numbers2, unsigned picks2);
int main()
{
    using namespace std;
    double total, choices, second, choices1;
    cout << "Enter the total number of all field number on the game card and\n"
            "the number of picks allowed: \n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "Enter the total number of the second field number on the game card and\n"
                "the number of picks allowed: \n";
        while ((cin >> second >> choices1) && choices1 <= second)
        {
            cout << "You have one chance in ";
            cout << probability(total, choices, second, choices1);    //compute the odds
            cout << " of winning.\n";
            cout << "Next two numbers (q to quit): ";
        }  
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned numbers2, unsigned picks2)
{
    long double result1 = 1.0;   //here com some local variables
    long double result2 = 1.0;   //here com some local variables
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result1 = result1 * n / p;
    for (n = numbers2, p = picks2; p > 0; n--, p--)
        result2 = result2 * n / p;
    long double result = result1 * result2;
    return result;
}