//Max of two numbers
#include <iostream>

using namespace std;


//// May way
//void Read2Numbers(int& Num1, int& Num2)
//{
//    cout << "Please enter number1: \n";
//    cin >> Num1;
//
//    cout << "Please enter number2: \n";
//    cin >> Num2;
//
//}
//
//int CheckMaxNumber(int Num1, int Num2)
//{
//    if (Num1 > Num2)
//        return Num1;
//
//    else
//        return Num2;
//
//    
//}
//
//void PrintMaxNumber(int Num1, int Num2)
//{
//    if (Num2 == Num1)
//        cout << "\nThe Numbers are equal";
//
//    else
//    {
//        int Max = CheckMaxNumber( Num1, Num2);
//            cout << Max;
//
//    }
//
//}

void ReadNumbers(int &Num1, int &Num2)
{
    cout << "Please enter number1: \n";
    cin >> Num1;

    cout << "Please enter number2: \n";
    cin >> Num2;
}

int CheckMaxNumber(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;

    else
        return Num2;
}

void PrintMaxNumber(int Max)
{
    cout << "The Maximum Number is: " << Max << endl;
}

int main()
{
    /*int Num1, Num2;

    Read2Numbers(Num1, Num2);
    PrintMaxNumber(Num1, Num2);*/

    int Num1, Num2;

    ReadNumbers(Num1, Num2);
    PrintMaxNumber(CheckMaxNumber(Num1, Num2));

    return 0;
}

