#include <iostream>

int main()
{
    using std::cout;
    using std::endl;

    const unsigned short int first_length = 3;
    const unsigned short int second_length = 4;

    unsigned short int array[first_length][second_length] = {
        {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    for (unsigned short int index = 0; index < first_length; index++)
    {
        for (unsigned short int innerIndex = 0; innerIndex < second_length; innerIndex++)
        {
            cout << "Array [" << index + 1 << "][" << innerIndex + 1 << "] = " << array[index][innerIndex] << endl;
        }
    }

    return 0;
}