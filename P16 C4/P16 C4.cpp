
#include <iostream>
#include <cmath>
using namespace std;

void ReadInfo(float &a, float &d)
{
    cout << "Please enter a: \n";
    cin >> a;

    cout << "Please enter d: \n";
    cin >> d;
}

float CalculateRectangleAreaThroughDiagonalandSideArea(float a, float d)
{
    return a * sqrt(pow(d, 2) - pow(a, 2));
}

void PrintRectangleAreaThroughDiagonalandSideArea(float Result)
{
    cout << "\nRectangle area Through Diagonal and Side Area = " << Result << endl;
}

int main()
{
    float a, d;

    ReadInfo(a, d);
    PrintRectangleAreaThroughDiagonalandSideArea(CalculateRectangleAreaThroughDiagonalandSideArea(a, d));


    return 0;
}

