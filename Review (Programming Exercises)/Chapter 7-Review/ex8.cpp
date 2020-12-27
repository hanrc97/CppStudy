// ex8.cpp -- modify the arrobj.cpp, not using the array class
// arrobj.cpp -- functions with array objects
// Here is Version b:
#include <iostream>
// #include <array>
#include <string>
const int Seasons = 4;
// const std::array<std::string, Seasons> Snames = 
//     {"Spring", "Summer", "Fall", "Winter"};

// void fill(std::array<double, Seasons> * pa);
// void show(std::array<double, Seasons> da);
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
void fill(double *);
void show(double *);
int main()
{
    // std::array<double, 4> expenses;
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double ar[])
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> ar[i];
    }
}

void show(double ar[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << ar[i] << "\n";
        total += ar[i];
    }
    std::cout << "Total: $" << total << "\n";
}

// Here is the Version b:
// use a structure, only a member
// #include <iostream>
// // #include <array>
// #include <string>
// const int Seasons = 4;
// // const std::array<std::string, Seasons> Snames = 
// //     {"Spring", "Summer", "Fall", "Winter"};

// // void fill(std::array<double, Seasons> * pa);
// // void show(std::array<double, Seasons> da);
// const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
// struct expenses
// {
//     double expense[Seasons];
// };

// void fill(expenses *);
// void show(expenses *);

// int main()
// {
//     // std::array<double, 4> expenses;
//     expenses e;
//     fill(&e);
//     show(&e);
//     return 0;
// }

// void fill(expenses * ar)
// {
//     for (int i = 0; i < Seasons; i++)
//     {
//         std::cout << "Enter " << Snames[i] << " expenses: ";
//         std::cin >> ar->expense[i];
//     }
// }

// void show(expenses * ar)
// {
//     double total = 0.0;
//     std::cout << "\nEXPENSES\n";
//     for (int i = 0; i < Seasons; i++)
//     {
//         std::cout << Snames[i] << ": $" << ar->expense[i] << "\n";
//         total += ar->expense[i];
//     }
//     std::cout << "Total: $" << total << "\n";
// }