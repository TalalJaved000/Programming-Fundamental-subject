#include<iostream>
using namespace std;
main()
{
  cout<<"Enter the Charge(Q) in coulombs : " ;
  int charge;
  cin>>charge;
  cout<<"Enter the Time(t) in seconds : " ;
  int time;
  cin>>time;
  float Current = charge / time ;
  cout<<" The current is "<<Current;
}

