// ex5.6.1.cpp -- 2-D array init
#include <iostream>
int main()
{
	using namespace std;
	int maxtemps[4][5] =
	{
		{96, 100, 97, 101, 103},
		{95, 200, 34, 132, 121},
		{34, 212, 101, 499, 200},
		{12, 30, 219, 299, 101}
	};

	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 5; ++col)
			cout << maxtemps[row][col] << "\t";
		cout << endl;
	}

	return 0;
}
