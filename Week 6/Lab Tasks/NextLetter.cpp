#include<iostream>
using namespace std;
main()
{
    char word[100];
    cout<< " Enter a Word : " ;
    cin>>word;
    for(int i=0; word[i] != '\0'; i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
            if(word[i] == 'z')
               word[i] = 'a';
               else
                   word[i] = word[i] + 1 ;
        }
    }
    cout<<" Shifted Word : " << word;
}