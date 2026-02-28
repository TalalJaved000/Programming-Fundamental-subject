#include<iostream>
using namespace std;
main()
{
  cout<<" Enter the current world population : " ;
  int Population;
  cin>>Population;
  cout<<" Enter the monthly birth rate : " ;
  int Months;
  cin>>Months;
  int Decades = Population + (Months * 360) ;
  cout<<" Population in three decades will be : "<<Decades;
}
