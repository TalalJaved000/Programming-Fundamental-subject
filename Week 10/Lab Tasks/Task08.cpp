#include <iostream>
#include <cmath>
using namespace std;

void calculateRoots(float a, float b, float c)
{
    float discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Solutions : x = " << root1 << " and x = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        float root = -b / (2 * a);
        cout << "Solution: x = " << root << endl;
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Complex solution: x = " << realPart << " + " << imaginaryPart << "i and x = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
}
int main()
{
    float a, b, c;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;
    calculateRoots(a, b, c);
    return 0;
}
