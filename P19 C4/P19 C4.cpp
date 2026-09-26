
#include <iostream>
#include <cmath>

using namespace std;

float ReadInfo()
{
    float D;

    cout << "Please enter D: \n";
    cin >> D;
    return D;
}

float CalculateCircleAreaThroughDiameter(float D)
{
    const float PI = 3.14159;
    float Area = (PI * pow(D, 2)) / 4;

    return Area;
}

void PrintCircleAreaThroughDiameter(float Area)
{
    cout << "\nCircle Area Through Diameter = " << Area << endl;
}

int main()
{
    
    PrintCircleAreaThroughDiameter(CalculateCircleAreaThroughDiameter(ReadInfo()));

    return 0;
}

