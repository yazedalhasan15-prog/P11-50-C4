
#include <iostream>
#include <cmath>

 
using namespace std;

//May way
//void ReadInfo(float &r)
//{
//    cout << "Please enter r: \n";
//    cin >> r;
//}
//
//float CalculateCircleArea(float r )
//{
//    const float PI = 3.14159;
//    float Area = PI * pow(r,2);
//    return Area;
//}
//
//void PrintCircleArea(float Area)
//{
//    cout << "\nCircleArea = " << Area << endl;
//}




float ReadInfo()
{
    float r;

    cout << "Please enter r: \n";
    cin >> r;
    return r;
}

float CalculateCircleArea(float r )
{
    const float PI = 3.14159;
    float Area = PI * pow(r,2);
    return Area;
}

void PrintCircleArea(float Area)
{
    cout << "\nCircleArea = " << Area << endl;
}

int main()
{
    /*float r;

    ReadInfo(r);
    PrintCircleArea(CalculateCircleArea(r));*/
    
    PrintCircleArea(CalculateCircleArea(ReadInfo()));

    return 0;
}

