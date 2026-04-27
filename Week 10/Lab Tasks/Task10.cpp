#include<iostream>
using namespace std;

char checkalphabetcase(char alphabet);
int main()
{
    char alphabet;
    cout<<" Enter an alphabet(A/a) : ";
    cin>>alphabet;

    checkalphabetcase(alphabet);
    return 0;
}
 char checkalphabetcase(char alphabet)
 {
    if(alphabet >= 'A' && alphabet <= 'Z')
    {
        cout<<" The alphabet is in uppercase.";
    }
    else if(alphabet >= 'a' && alphabet <= 'z')
    {
        cout<<" The alphabet is in lowercase.";
    }
    else
    {
        cout<<" Invalid input.";
    }
    return alphabet;
 }