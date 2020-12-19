// ex7.cpp -- cctype, is alpha...
#include <iostream>
#include <cctype>
#include <string>

int main()
{
    using namespace std;

    cout << "Enter words (q for quit): ";
    string str;
    int x = 0, y = 0;
    cin >> str;
    while (str != "q")
    {
        if (isalpha(str[0]))
        {
            switch(str[0])
            {
                case 'A' :
                case 'a' : x++;; break;
                case 'E' :
                case 'e' : x++;; break;
                case 'I' :
                case 'i' : x++;; break;
                case 'O' :
                case 'o' : x++;; break;
                case 'U' :
                case 'u' : x++;; break;
                default : break;
            }
        }
        else
            y++;    // count the other items
        cin >> str; 
    }
    cout << "There are " << x << " words with a, e, i, o, u.\n";
    cout << "And " << y << " words are non-alpha";
    return 0;
}