#include<iostream>
using namespace std;
main()
{
  cout<<" Enter paint area : " ;
  int n ;
  cin>>n ;
  cout<<" Enter width : " ;
  int w ;
  cin>>w ;
  cout<<" Enter height : " ;
  int h ;
  cin>>h ;
  int painted = n / (w * h) ;
  cout<<" Walls painted : "<<painted;
}