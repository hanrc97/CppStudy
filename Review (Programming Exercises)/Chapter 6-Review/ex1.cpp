// ex1 -- cctype and if else...
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    char ch;
    cout << "Enter something (end with @): ";
    cin >> ch;
    while (ch != '@')
    {
        if (!isdigit(ch))
            cout << "You input the character " << ch << endl;
            if (isupper(ch))
                cout << " and the lowercase is " << char(tolower(ch)) << endl;
            else if (islower(ch))
                cout << " and the uppercase is " << char(toupper(ch)) << endl;
        cout << "Enter something (end with @): ";
        cin >> ch;
    }
    return 0;
}