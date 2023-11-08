#include <iostream>

using namespace std;
constexpr unsigned short int getSumOfTwo(int firstNumber, int secondNumber)
{
    return firstNumber + secondNumber;
}


int main()
{

    const unsigned short int number_1 = 10;
    const unsigned short int number_2 = 20;

    cout << "sum of : " << number_1 << " + " << number_2 << " = ";

    cout << getSumOfTwo(number_1, number_2) << endl;

    return 0;
}