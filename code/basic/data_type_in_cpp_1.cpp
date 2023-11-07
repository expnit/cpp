#include <iostream>
#include <string>

int main()
{
    using std::cout;
    using std::endl;
    using std::string;

    unsigned short int latestCppVersion = 23;

    signed short int temprature_at_antarctica = -45;

    float gravitational_acceleration_force_on_earth = 9.8;

    double value_with_more_points = 10.1002012;

    char examGrade = 'a';

    string programmer_name = "Chauhan Pruthviraj";

    bool is_cpp_easy_programming = true;

    cout << "=========================" << endl;

    cout << "Latest version of C++ is : C++" << latestCppVersion << endl;

    cout << "Temprature of Antarctica is : " << temprature_at_antarctica << endl;

    cout << "Gravitational acceleration force on Earth is : " << gravitational_acceleration_force_on_earth << " Meter Per second " << endl;

    cout << "value with decimal points : " << value_with_more_points << endl;

    cout << "My Exam grade was  : " << examGrade << endl;

    cout << "My name is : " << programmer_name << endl;

    cout << "is C++ Easy ? " << (is_cpp_easy_programming ? "Yes" : "No") << endl;

    return 0;
}