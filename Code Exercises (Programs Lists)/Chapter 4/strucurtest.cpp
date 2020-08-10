// strucurtest.cpp -- declare a structure
#include <iostream>
using namespace std;
struct student
{
	string name;
	int number;
	bool sex;
	int age;
	float height;
	float weight;
};

student a
{
	"Francis",
	59,
	true,
	23,
	176.0,
	76.0
};

student b
{
	"Alex",
	10,
	false,
	26,
	169.0,
	50.0
};

int main()
{
	using namespace std;
	cout << "Student A's name is " << a.name
			 << " , number: " << a.number
			 << " , sex: " << a.sex
			 << " , age: " << a.age
			 << " , height: " << a.height
			 << " , weight: " << a.weight << endl;
	cout << "Student B's name is " << b.name
			 << " , number: " << b.number
			 << " , sex: " << b.sex
			 << " , age: " << b.age
			 << " , height: " << b.height
			 << " , weight: " << b.weight << endl;
	cin.get();
	return 0;
}