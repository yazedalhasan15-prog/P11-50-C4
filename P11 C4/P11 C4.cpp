// Avrage Pass Fail
#include <iostream>

using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

//// May way
//struct stInfo
//{
//    int Num1;
//    int Num2;
//    int Num3;
//};
//
//stInfo ReadNumbers()
//{
//    stInfo Info;
//
//    cout << "Please enter number1: \n";
//    cin >> Info.Num1;
//
//    cout << "Please enter number2: \n";
//    cin >> Info.Num2;
//
//    cout << "Please enter number3: \n";
//    cin >> Info.Num3;
//
//    return Info;
//}
//
// float AvrageNumbers(stInfo Info)
//{
//     return (float)((Info.Num1 + Info.Num2 + Info.Num3) / 3);
//}
//
//void CheckPassOrFail(float Avrage)
//{
//    if (Avrage > 50)
//        cout << "Your Mark is: " << Avrage << "\nPass";
//    else
//        cout << "Your Mark is: " << Avrage << "\nFail";
//
//}

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter Number1:\n";
    cin >> Mark1;

    cout << "Pleaase enter Number2:\n";
    cin >> Mark2;

    cout << "Please enter Number3:\n";
    cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}


float AvrageOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}


enPassFail checkPassOrFail(float Average)
{
    if (Average > 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}


void PrintResults(float Average)
{
    cout << "\nYour Average is: " << Average << endl;

    if (checkPassOrFail(Average) == enPassFail::Pass)
        cout << "\nYou Passed" << endl;
    else
        cout << "\nYou Faild" << endl;
}


int main()
{
    //CheckPassOrFail(AvrageNumbers(ReadNumbers()));

    int Mark1, Mark2, Mark3;

    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResults(AvrageOf3Marks(Mark1, Mark2, Mark3));


    return 0;
}

