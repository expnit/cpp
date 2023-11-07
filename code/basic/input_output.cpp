#include <iostream>
#include <string>
int main()
{
    std::cout << "Enter your Name : ";

    std::string userName;

    std::cin >> userName;

    std::cout << "\nEnter Year : ";

    signed short int currentYear = 0;

    std::cin >> currentYear;

    std::cout << "\n"
              << userName << " Entered " << currentYear << std::endl;

    return 0;
}