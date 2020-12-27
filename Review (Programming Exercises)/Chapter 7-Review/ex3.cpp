// ex3.cpp -- structure and functions
#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};  // shift + tab 

void show(box b1);
float cubic(box * p1);

int main()
{
    using namespace std;
    box box = 
    {
        "Apple",
        3.5,
        2.5,
        1.5,
        0.0
    };
    float volume = cubic(&box);
    show(box);
}

void show(box b1)
{
    using namespace std;

    cout << "Maker = " << b1.maker << endl;
    cout << "Height = " << b1.height << endl;
    cout << "Width = " << b1.width << endl;
    cout << "Length = " << b1.length << endl;
    cout << "Volume = " << b1.volume << endl;
}

float cubic(box * p1)
{
    p1->volume = p1->height * p1->width * p1->length;
    return p1->volume;
}

