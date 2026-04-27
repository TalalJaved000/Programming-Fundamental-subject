#include <iostream>
using namespace std;

string evenodd(int number);

int main()
{
    int number;
    cout << " Enter a 5-digit number : ";
    cin >> number;

    string result = evenodd(number);
    cout << result;
    return 0;
}
string evenodd(int number)
{
    int digit1, digit2, digit3, digit4, digit5;
    digit1 = number / 10000;
    digit2 = (number / 1000) % 10;
    digit3 = (number / 100) % 10;
    digit4 = (number / 10) % 10;
    digit5 = number % 10;
    int sum = digit1 + digit2 + digit3 + digit4 + digit5;
    if (sum % 2 == 0)
    {
        return " Evenish ";
    }
    else
    {
        return " Oddish ";
    }
}