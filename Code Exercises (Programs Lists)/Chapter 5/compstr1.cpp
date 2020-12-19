// compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char word[5] = "?oom";
	for (char ch = 'a'; strcmp(word, "zoom"); ch++)
	// strcmp(str1, str2)
	// if str1 = str2, then the expression is false
	// otherwise, the expression is true, the loop is going on.
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}