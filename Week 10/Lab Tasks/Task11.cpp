#include<iostream>
using namespace std;

string symmetry(int number);

int main()
{
    int number;
    cout<<" Enter a 3-digit number : ";
    cin>>number;

    string result = symmetry(number);
    cout<<result;
    return 0;
}
string symmetry(int number)
{
    int digit1, digit2, digit3;
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    if(digit1 == digit3)
    {
        return " The number is symmetric.";
    }
    else
    {
        return " The number is not symmetric.";
    }
}


