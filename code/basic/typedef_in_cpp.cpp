#include <iostream>
#include <string>
int main()
{

    using namespace std;

    typedef unsigned short int ushort;

    typedef std::string str;

    typedef bool truth;

    ushort cpp_version_number = 23;

    str name = "Chauhan Pruthviraj";

    truth is_cplusplus_good = true;

    cout << "C++ version number : C++" << cpp_version_number << endl;

    cout << "is C++ good : " << (is_cplusplus_good ? "Yes" : "No") << endl;

    cout << "My Name is : " << name << endl;

    return 0;
}