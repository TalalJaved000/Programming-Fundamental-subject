#include<iostream>
using namespace std;
main()
{
  cout<<" Enter initial velocity : " ;
  int Vi ;
  cin>>Vi ;
  cout<<" Enter acceleration : " ;
  int a ;
  cin>>a ;
  cout<<" Enter time : " ;
  int t ;
  cin>>t ;
  float Vf = (a * t) + Vi ;
  cout<<" Fina velocity of car is "<<Vf;
}
