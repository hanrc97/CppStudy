// ex9.cpp -- ex9
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string word;
	cout << "Enter a word (to stop, use the word done)" << endl;
	cin >> word;
	int count = 0;
	while (word != "done")
	{
		count++;
		cin >> word;
	}
	cout << count << " words you have entered." << endl;
	return 0;
}
