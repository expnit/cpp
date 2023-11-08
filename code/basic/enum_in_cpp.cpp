#include <iostream>

int main()
{

    using std::cout;
    using std::endl;

    enum countries
    {
        usa = 1,
        russia,
        china,
        india,
        japan,
        france
    };

    countries number_one_military_super_power = usa;

    cout << "America is : " << number_one_military_super_power << "st Military super power" << endl;

    cout << "Russia is  : " << countries::russia << "nd most powerful military country" << endl;

    return 0;
}