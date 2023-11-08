#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    enum countries
    {
        uk,
        france,
        usa
    };

    int united_kingdom = uk; // integer type variable can use the value of uk

    // example of scoped enum
    enum class cities
    {
        london,
        paris,
        newyork
    };

    cities capital_of_uk = cities::london; // enum type can access the value of london

    // int england = cities::london; //if uncomment this line then there will be error

    return 0;
}