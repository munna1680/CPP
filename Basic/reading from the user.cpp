#include <iostream>

using namespace std;

int main()
{
    cout << "Fahrenheit: " << endl;
    double fahrenheit;
    cin >> fahrenheit;

    double celsius = (fahrenheit - 32) / 1.8;
    cout << "Celsous: " << celsius << " Degree";

    return 0;
}