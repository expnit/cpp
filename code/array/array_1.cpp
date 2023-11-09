#include <iostream>
#include <string>
int main()
{
    using std::cout;
    using std::endl;
    using std::string;
    const unsigned short int length = 5;

    string elements[length] = {"First", "Second", "Third", "Fourth", "Fifth"};

    unsigned short int array[length] = {1, 2, 3, 4, 5};

    for (unsigned short int index = 0; index < length; index++)
    {
        cout << elements[index] << " Element at index [" << index + 1 << "] = " << array[index] << endl;
    }

    return 0;
}