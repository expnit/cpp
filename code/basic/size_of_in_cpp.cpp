#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    cout << "===============================" << endl;

    cout << "size of short int : " << sizeof(short int) << endl;
    cout << "size of unsigned short int : " << sizeof(unsigned short int) << endl;
    cout << "size of signed short int : " << sizeof(signed short int) << endl;
    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of long int : " << sizeof(long int) << endl;
    cout << "size of long long int : " << sizeof(long long int) << endl;
    cout << "size of float : " << sizeof(float) << endl;
    cout << "Size of double  : " << sizeof(double) << endl;
    cout << "size of char : " << sizeof(char) << endl;
    cout << "size of bool : " << sizeof(bool) << endl;
    cout << "size of string : " << sizeof(std::string) << endl;
    cout << "===============================" << endl;

    return 0;
}