#include<iostream>
using namespace std;
main()
{
    char word[100];
    int length = 0 ;
    cout<<" Enter a Word : " ;
    cin>>word;

    while(word[length] != '\0')
    {
        length++;
    }
    cout<<" Reversed Word : " ;
    for(int i=length - 1; i >=0; i--)
    {
        cout<< word[i];
    }
}