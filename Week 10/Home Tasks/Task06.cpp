#include <iostream>
using namespace std;
bool isStrong(int num);
int main()
{
    int num;
    cout << "Enter the number:" << endl;
    cin >> num;

    if (isStrong(num))
    {
        cout << "Strong number" << endl;
    }
    else
    {
        cout << "Not Strong Number" << endl;
    }
    return 0;
}
bool isStrong(int num)
{
    int originalNum = num;
    int sum = 0;
    while (num != 0)
    {
        int dig = num % 10;
        int factorial = 1;
        for (int i = 1; i <= dig; i++)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        num = num / 10;
    }
    if (sum == originalNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}