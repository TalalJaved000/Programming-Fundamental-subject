#include <iostream>
using namespace std;

string numbertext(int number);

int main()
{
    int number;
    cout << " Enter a number between 1 and 99 : ";
    cin >> number;

    string result = numbertext(number);
    cout << result;
    return 0;
}

string numbertext(int number)
{
    if (number == 1)
    {
        return " One ";
    }
    else if (number == 2)
    {
        return " Two ";
    }
    else if (number == 3)
    {
        return " Three ";
    }
    else if (number == 4)
    {
        return " Four ";
    }
    else if (number == 5)
    {
        return " Five ";
    }
    else if (number == 6)
    {
        return " Six ";
    }
    else if (number == 7)
    {
        return " Seven ";
    }
    else if (number == 8)
    {
        return " Eight ";
    }
    else if (number == 9)
    {
        return " Nine ";
    }
    else if (number == 10)
    {
        return " Ten ";
    }
    else if (number == 11)
    {
        return " Eleven ";
    }
    else if (number == 12)
    {
        return " Twelve ";
    }
    else if (number == 13)
    {
        return " Thirteen ";
    }
    else if (number == 14)
    {
        return " Fourteen ";
    }
    else if (number == 15)
    {
        return " Fifteen ";
    }
    else if (number == 16)
    {
        return " Sixteen ";
    }
    else if (number == 17)
    {
        return " Seventeen ";
    }
    else if (number == 18)
    {
        return " Eighteen ";
    }
    else if (number == 19)
    {
        return " Nineteen ";
    }
    else if (number == 20)
    {
        return " Twenty ";
    }
    else
    {
        int tens = number / 10;
        int units = number % 10;
        string tensText, unitsText;

        switch (tens)
        {
        case 2:
            tensText = "Twenty";
            break;
        case 3:
            tensText = "Thirty";
            break;
        case 4:
            tensText = "Forty";
            break;
        case 5:
            tensText = "Fifty";
            break;
        case 6:
            tensText = "Sixty";
            break;
        case 7:
            tensText = "Seventy";
            break;
        case 8:
            tensText = "Eighty";
            break;
        case 9:
            tensText = "Ninety";
            break;
        }
        switch (units)
        {
        case 1:
            unitsText = "One";
            break;
        case 2:
            unitsText = "Two";
            break;
        case 3:
            unitsText = "Three";
            break;
        case 4:
            unitsText = "Four";
            break;
        case 5:
            unitsText = "Five";
            break;
        case 6:
            unitsText = "Six";
            break;
        case 7:
            unitsText = "Seven";
            break;
        case 8:
            unitsText = "Eight";
            break;
        case 9:
            unitsText = "Nine";
            break;
        }
        return tensText + "-" + unitsText;
    }
}