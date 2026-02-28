#include<iostream>
using namespace std;
main()
{
  cout<<" Enter voltage (in volts) : " ;
  int Volts;
  cin>>Volts;
  cout<<" Enter current (in Amperes) : " ;
  int Current;
  cin>>Current;
  float Power = Volts * Current ;
  cout<<" The power is "<<Power<<" watts " ;
}