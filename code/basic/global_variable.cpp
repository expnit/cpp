#include <iostream>

int firstNumber = 0;

int secondNumber = 0;

void addition()
{
    std::cout << "Enter First Number : ";
    std::cin >> firstNumber;

    std::cout << "\nEnter Second Number : ";
    std::cin >> secondNumber;

    std::cout << "Result of Sum from addition() function is \n";
    std::cout << firstNumber << " + " << secondNumber << " = " << (firstNumber + secondNumber) << std::endl;
}

int main()
{
    std::cout << "This program helps you sum of two numbers" << std::endl;

    addition(); // calling function
    std::cout << "=============================================" << std::endl;
    std::cout << "showing from main : " << std::endl;

    std::cout << "first number is  : " << firstNumber << " Second Number is  : " << secondNumber << std::endl;
    std::cout << "sum of " << firstNumber << " + " << secondNumber << " = " << (firstNumber + secondNumber) << std::endl;

    return 0;
}