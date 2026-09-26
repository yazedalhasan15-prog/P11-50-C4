
#include <iostream>

using namespace std;

void ReadInfo(float&a, float&b)
{
    cout << "Please enter a: \n";
    cin >> a;

    cout << "Please enter b: \n";
    cin >> b;
}

float CaculateRectangleArea(float a, float b)
{
    return a * b;
}

void PrintRectangleArea(float Mark)
{
    cout << "\nRectangle Area = " << Mark;
}

int main()
{
    float a, b;

    ReadInfo(a, b);
    PrintRectangleArea(CaculateRectangleArea(a, b));

    return 0;
}

