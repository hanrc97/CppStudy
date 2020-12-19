// ex6.cpp -- open a file and read
#include <iostream>
#include <cstring>
#include <fstream> 

int main()
{
    using namespace std;

    string filename;
    char ch;
    int count = 0;
    ifstream infile;
    cout << "Type the name of file which you want to open:_________\b\b\b\b\b\b\b\b";
    cin >> filename;
    infile.open(filename);
    infile >> ch;
    while (infile.good())
    {
        ++count;    // one more item read
        infile >> ch;
    }
    if (infile.eof())
    {
        cout << "It reached the end of the file.\n";
        cout << "There are " << count << " characters in the file.\n";
    }
    infile.close();
    return 0;
}