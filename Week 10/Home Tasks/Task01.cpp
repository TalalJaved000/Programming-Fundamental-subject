#include<iostream>
using namespace std;

int x=10;
void myFunction()
{
    cout << "The value of x is:"<<x;
    int x=20;
}
int main()
{
    myFunction();
    int x=30;
    cout << "The value of x is:"<<x<<endl;
    myFunction();
}