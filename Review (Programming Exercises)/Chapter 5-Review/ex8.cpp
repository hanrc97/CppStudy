// ex8.cpp -- ex8
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char word[20];
	cout << "Enter a word (to stop, type the word done): " << endl;
	cin >> word;
	int count = 0;
	while (strcmp("done", word))
	{
		count++;
		cin >> word;
	}
	cout << count << " words you have entered." << endl;
	return 0;
}
