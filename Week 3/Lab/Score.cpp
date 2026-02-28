#include<iostream>
using namespace std;
main()
{
  cout<<" Enter the number of wins : " ;
  int Wins;
  cin>>Wins;
  cout<<" Enter the number of draws : " ;
  int Draws;
  cin>>Draws;
  cout<<" Enter the amount of loses : " ;
  int Losses;
  cin>>Losses;
  int Points = (Wins * 3) + (Draws * 1) + (Losses * 0) ;
  cout<<" Pakistan has abotained "<<Points<<" points " ;
} 
  
  
