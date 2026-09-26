
#include <iostream>

using namespace std;

void ReadInfo(float &a, float &h)
{
    cout << "Please enter a: \n";
    cin >> a;

    cout << "Please enter h: \n";
    cin >> h;
}

int CalculateTriangleArea(float a, float h)
{
    float Area = (a / 2) * h;
    return Area;
}

void PrintResult(int area)
{
    cout << "\nTriangle Area = " << area << endl;
}

int main()
{
    float a, h;

    ReadInfo(a, h);
    PrintResult(CalculateTriangleArea(a, h));

    return 0;
}

