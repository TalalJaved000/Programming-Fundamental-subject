#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool isfound = false;
    cout<<" Enter a word : " ;
    cin>>word;
    cout<<" Enter the character you want to find : " ;
    cin>>letter;
    for(int i=0; word[i] != '\0'; i++)
    {
      if(word[i] == letter)
      {
        isfound = true;
        break;
      }
    }
    if(isfound)
    {
        cout<<letter<<" is found in "<<word;
    }
    else{
        cout<<letter<<" is not found in "<<word;
    }
    return 0;
}