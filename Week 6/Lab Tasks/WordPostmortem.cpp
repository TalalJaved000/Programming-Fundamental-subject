#include<iostream>
using namespace std;
main()
{
    char word[100];
    cout<<" Enter a Word : " ;
    cin>>word;
    for(int i=0; word[i] != '\0'; i++)
    {
        cout<< word[i] << " is at position " << i <<endl;
    }
}