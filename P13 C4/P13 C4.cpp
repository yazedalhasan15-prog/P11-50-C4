// Max of 3 Number
#include <iostream>

using namespace std;

//May way
//void ReadNumbers(int& Num1, int& Num2, int &Num3)
//{
//    cout << "Please enter NUmber1: \n";
//    cin >> Num1;
//
//    cout << "Please enter Number2: \n";
//    cin >> Num2;
//
//    cout << "Please entr Number3: \n";
//    cin >> Num3;
//}
//
//int CheckMaxNumber(int Num1, int Num2, int Num3)
//{
//    if (Num1 > Num2 && Num1> Num3)
//        return Num1;
//    else if (Num2 > Num1 && Num1 > Num3)
//        return Num2;
//    else
//        return Num3;
//    
//}
//
//void PrintMaxNumber(int Max)
//{
//    cout << "The Maximum Number is: " << Max << endl;
//}

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Please enter NUmber1: \n";
    cin >> Num1;

    cout << "Please enter Number2: \n";
    cin >> Num2;

    cout << "Please entr Number3: \n";
    cin >> Num3;
}

int CheckMaxNumber(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
    if (Num2 > Num1)
        if (Num2 > Num3)
            return Num2;
    if (Num3 > Num1)
        if (Num3 > Num2)
            return Num3;

}

void PrintMaxNumber(int Max)
{
    cout << "\nThe Maximum Number is: " << Max << endl;
}


int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);
    PrintMaxNumber(CheckMaxNumber(Num1, Num2, Num3));



    return 0;
}

