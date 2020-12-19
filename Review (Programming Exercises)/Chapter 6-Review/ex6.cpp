// ex6.cpp -- dynamic struc array
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    struct donation
    {
        string name;
        double value;
    };
    int n;
    int m = 0;
    cout << "Enter the number of donators: ";
    cin >> n;
    donation * ps = new donation[n];
    while (n >= 1)
    {
        cout << "Enter the donator's name: ";
        cin >> ps[n - 1].name;
        cout << "Enter the donator's donation value: ";
        cin >> ps[n - 1].value;
        n--;
        m++;
    }
    cout << "All data have been entered.\n";

    int mm = 0;
    int flag = 0;
    cout << "Here are the important donators who donate beyond 10,000:\n";
    for(m; m >= 1; m--)
    {
        if(ps[m - 1].value >= 10000)
        {
            cout << ps[m - 1].name << " donates $" << ps[m - 1].value << endl;
            flag = 1;
        }
        mm++;    
    }

    if (flag == 0){
        cout << "None.\n";
    }

    cout << "Here are the others:\n";
    flag = 0;
    for (mm; mm >= 1; mm--)
    {
        if(ps[mm - 1].value < 10000)
        {
            cout << ps[mm - 1].name << " donates $" << ps[mm - 1].value << endl;   
            flag = 1;
        }
    }

    if (flag == 0){
        cout << "None.\n";
    }

    return 0;
}

// 动态结构数组的直接for循环遍历，思考