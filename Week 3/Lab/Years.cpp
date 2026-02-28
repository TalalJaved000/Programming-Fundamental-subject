#include<iostream>
using namespace std;
main()
{
  cout<<" Enter age : " ;
  int A ;
  cin>>A ;
  cout<<" Enter moves : " ;
  int M ;
  cin>>M ;
  int home =  A / (M + 1) ;
  cout<<" Average years : "<<home;
}