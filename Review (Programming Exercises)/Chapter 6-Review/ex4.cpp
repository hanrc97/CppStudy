#include <iostream>
#include <array>
using namespace std;
const int strsize = 51;
struct bop
{
    char fullname[strsize]; //real name
    char title[strsize];    //job title
    char bopname[strsize];  //secret BOP name
    int preference; //0 = fullname, 1  = title, 2 = bopname
};

void showMenu()
{
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name      b. display by title\n";
    cout << "c. display by bopname   d. display by preference\n";
    cout << "q. quit\n";
    cout << "Enter your choice, q to quit: ";
}
    void displayByName(const bop *bopArray)
{
for(int i = 0;i < 3; i++)
{
    cout << bopArray[i].fullname << endl;
}

}
    void displayByTitle(const bop *bopArray)
{
    for(int i = 0;i < 3; i++)
    {
        cout << bopArray[i].title << endl;
    }
}
    void displayByBopname(const bop *bopArray)
{
    for(int i = 0;i < 3; i++)
    {
        cout << bopArray[i].bopname << endl;
    }
}
    void displayByPrefer(const bop *bopArray)
{
    for(int i = 0; i < 3; i++)
    {
        switch (bopArray[i].preference)
        {
            case 0:
                cout << bopArray[i].fullname << endl;
                break;
            case 1:
                cout << bopArray[i].title << endl;
                break;
            case 2:
                cout << bopArray[i].bopname << endl;
                break;
            default:
                break;
        }
    }
    
}
int main()
{
    bop men[3] = 
    {
        {"name1","job1","bopname1",0},
        {"name2","job2","bopname1",1},
        {"name3","job3","bopname3",2}
    };
    showMenu();
    char choice;
    cin >> choice;
    while(choice != 'q')
    {
        switch (choice)
        {
            case 'a':
                displayByName(men);
                break;
            case 'b':
                displayByTitle(men);
                break;
            case 'c':
                displayByBopname(men);
                break;
            case 'd':
                displayByPrefer(men);
                break;
            default:
                cout << "Invalid input, please try again!\n";
        }
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << "Bye!";
    return 0;
}
// // ex4.cpp -- display member by sth.
// #include <iostream>

// const int strsize = 80
// // Benevolent Order of Programmers name structure
//     struct bop {
//         char fullname[strsize]; // real name
//         char title[strsize]; // job title
//         char bopname[strsize]; // secret BOP name
//         int preference; // 0 = fullname; 1 = title; 2 = bopname
//     };
// int main()
// {
//     bop Bop[4] =
//     {
//         {"Wimp Macho", "Dancer", "WM", 0},
//         {"Raki Rhodes", "Junior Programmer", "RR", 1},
//         {"Celia Laiter", "Java Developer", "MIPS", 2},
//         {"Hoppy Hipman", "Analyst Traninee", "HH", 1},
//         {"Pat Hand", "Python Developer", "LOOPY", 2}
//     };
    
//     cout << "Please enter one of the following choices:\n"
//         << "a. display by name         b. display by title\n"
//         << "c. display by bopname      d. display by preference\n"
//         << "q. quit"
//     char ch;
//     while (cin.get(ch) != 'q' || cin.get(ch) != 'Q')
//     {
//         switch (ch)
//         {
//             case 'A' : 
//             case 'a' : cout << Bop[0].fullname << endl
//                           << Bop[1].fullname << endl
//                           << Bop[2].fullname << endl
//                           << Bop[3].fullname << endl
//                           << Bop[4].fullname << endl; break;
//             case 'B' : 
//             case 'b' : cout << Bop[0].title << endl
//                           << Bop[1].title << endl
//                           << Bop[2].title << endl
//                           << Bop[3].title << endl
//                           << Bop[4].title << endl; break;
//             case 'C' : 
//             case 'c' : cout << Bop[0].bopname << endl
//                           << Bop[1].bopname << endl
//                           << Bop[2].bopname << endl
//                           << Bop[3].bopname << endl
//                           << Bop[4].bopname << endl; break
//             default : "Please confirm that you enter the right choice.\n"; break;
//         }
//     }
//     return 0;
// }