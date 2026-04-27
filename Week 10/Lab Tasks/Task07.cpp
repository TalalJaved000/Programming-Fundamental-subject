#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int dis, angle;
    cout << "Enter the distance from the base of the tree (in feet):";
    cin >> dis;
    cout << "Enter the angle of elevation (in degrees):";
    cin >> angle;
    float rad = angle*3.14/180.0;

    cout << " The height of the tree is:" << dis * tan(rad) << " feet " << endl;
    return 0;
}