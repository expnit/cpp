#include <iostream>

int main()
{
    std::cout << "This program helps you sum of two numbers" << std::endl;

    std::cout << "Enter First Number : ";

    int firstNumber = 0;

    std::cin >> firstNumber;

    std::cout << "\nEnter Second Number : ";

    int secondNumber = 0;

    std::cin >> secondNumber;

    std::cout << "\nResult of " << firstNumber << " + " << secondNumber;

    std::cout << " = " << (firstNumber + secondNumber) << std::endl;

    return 0;
}