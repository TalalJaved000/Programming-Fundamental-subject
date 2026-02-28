#include<iostream>
using namespace std;
main()
{
  cout<<" Enter sides : " ;
  int sides;
  cin>>sides;
  int angles = (sides - 2) * 180 ;
  cout<<" Sum of angles : "<<angles;
}
