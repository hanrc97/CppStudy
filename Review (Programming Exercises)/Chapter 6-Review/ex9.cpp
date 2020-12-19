// ex9.cpp -- realize the ex6.cpp with a file input
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
struct donation
{
    string name;
    double value;
};

void iflag (int);

int main()
{
    int num;
    string buffer[10];
    ifstream infile;
    infile.open("ex9_in.txt");
    if (!infile.is_open())
    {
        cout << "Could not open the file.\n";
        cout << "rogram terminating.\n";
        exit(EXIT_FAILURE);
    }

    infile >> num;
    infile.get();

    donation * ps = new donation[num];
    for (int i = 0; i < num; i++)
    {
        getline(infile, ps[i].name);
        infile >> ps[i].value;
        infile.get();
    }
    cout << "All data have been entered.\n";
    infile.close();

    int flag = 0;
    cout << "Here are the important donators who donate beyond 10,000:\n";
    // display information
    for(int i = 0; i < num; i++)
    {
        if(ps[i].value >= 10000)
        {
            cout << ps[i].name << " donates $" << ps[i].value << endl;
            flag = 1;
        }    
    }
    iflag(flag);

    cout << "Here are the others:\n";
    flag = 0;
    for (int i = 0; i < num; i++)
    {
        if(ps[i].value < 10000)
        {
            cout << ps[i].name << " donates $" << ps[i].value << endl;   
            flag = 1;
        }
    }
    iflag(flag);
    delete [] ps;
    cin.get();
    return 0;
}

void iflag(int n)
{
    int flag = n;

    if (flag == 0){
        cout << "None.\n";
    }
}