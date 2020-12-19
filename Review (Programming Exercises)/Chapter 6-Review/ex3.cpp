// ex3.cpp -- switch case
#include <iostream>

int main()
{
    using namespace std;

    char ch;
    cout << "Please enter one of the following choices:\n"
         << "c) carnivore       p) pianist\n"
         << "t) tree            g) game\n";
    while (cin >> ch)
    {
        switch (ch)
        {
            case 'C' : 
            case 'c' : cout << "A maple is a carnivore."; break;
            case 'P' :
            case 'p' : cout << "A maple is a pianist."; break;
            case 'T' : 
            case 't' : cout << "A maple is a tree."; break;
            case 'G' :
            case 'g' : cout << "A maple is a game."; break;
            default : cout << "Please enter : c, p, t, or g: "; continue;
        }
        if (ch == 'C' || ch == 'c' || 
            ch == 'P' || ch == 'p' || 
            ch == 'T' || ch == 't' || 
            ch == 'G' || ch == 'g')
            break;
    }
    return 0;
}