#include<iostream>
using namespace std;
main()
{
  cout<<" Enter imposters : " ;
  int Imposters;
  cin>>Imposters;
  cout<<" Enter players : " ;
  int Players;
  cin>>Players;
  float chance = (float)Imposters / Players * 100 ;
  cout<<" Chances : "<<chance<<" % " ;
}

