
#include <iostream>
#include <cmath>

using namespace std;

float ReadInfo()
{
    float l;

    cout << "Please enter l: \n";
    cin >> l;

    return l;
}

float  CircleAreaAlongTheCircumference(float l)
{
    const float PI = 3.141592653589793;
    float Area = (pow(l, 2)) / (4 * PI);

    return Area;
}

void PrintCircleArea(float Area)
{
    cout << "Circle Area = " << Area << endl;
}

int main()
{
    PrintCircleArea(CircleAreaAlongTheCircumference(ReadInfo()));

    return 0;
}

