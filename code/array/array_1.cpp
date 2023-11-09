#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    const unsigned short int length = 5;

    unsigned short int array[length] = {1, 2, 3, 4, 5};

    for (unsigned short int index = 0; index < length; index++)
    {
        cout << "Array [" << index + 1 << "] = " << array[index] << endl;
    }

    return 0;
}