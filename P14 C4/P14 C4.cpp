
#include <iostream>

using namespace std;

//May way
//void ReadNumbers(int &Num1, int &Num2)
//{
//    cout << "Please enter Number1: \n";
//    cin >> Num1;
//
//    cout << "Please enter Number2: \n";
//    cin >> Num2;
//}
//
//void PrintNumbers(int Num1, int Num2)
//{
//    cout << "\nBefore Swap: " << Num1 << " | " << Num2;
//}
//
//void Swap2Numbers(int &Num1, int &Num2)
//{
//    int Temp = Num1;
//    Num1 = Num2;
//    Num2 = Temp;
//
//}
//
//void PrintSwapNumbers(int Num1, int Num2)
//{
//    cout << "\nAfter Swap " << Num1 << " | " << Num2;
//}




void ReadNumbers(int &Num1, int &Num2)
{
    cout << "Please enter Number1: \n";
    cin >> Num1;

    cout << "Please enter Number2: \n";
    cin >> Num2;
}

void Swap2Numbers(int &Num1, int &Num2)
{
    int Temp;

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

}

void PrintSwapNumbers(int Num1, int Num2)
{
    cout << "Number1 = " << Num1 << "\nNumber2 = " << Num2 << endl << endl;
}

int main()
{
    int Num1, Num2;

    /*ReadNumbers(Num1, Num2);
    PrintNumbers( Num1, Num2);
    Swap2Numbers(Num1, Num2);
    PrintSwapNumbers(Num1, Num2);*/

    ReadNumbers(Num1, Num2);
    PrintSwapNumbers(Num1, Num2);
    Swap2Numbers(Num1, Num2);
    PrintSwapNumbers(Num1, Num2);


    return 0;
}
