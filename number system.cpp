#include <iostream>

using namespace std;

int main()
{
    ///for binary number to decimal
    auto number = 0b11111111;
    cout << number << endl;

    //for hexadecimal number to decimal
    auto num = 0xFF;
    cout << num;

    return 0;
}
/*
don't use [unsigned] data type, 
because it doesn't take input 
negative values
*/