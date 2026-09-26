
#include <iostream>
#include <cmath>

using namespace std;

float ReadInfo()
{
    float A;

    cout << "Please enter A: \n";
    cin >> A;

    return A;
}

float CalculateCircleAreaInscribedInASquare(float A)
{
    float PI = 3.14159;
    float Area = (PI * pow(A, 2)) / 4;
    return Area;
}

void PrintCircleAreaInscribedInASquare(float Area)
{
    cout << "\nCircleAreaInscribedInASquare = " << Area << endl;
}

int main()
{
    PrintCircleAreaInscribedInASquare(CalculateCircleAreaInscribedInASquare(ReadInfo()));

    return 0;
}

