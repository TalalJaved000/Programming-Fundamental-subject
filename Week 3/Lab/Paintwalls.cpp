#include<iostream>
using namespace std;
main()
{
  cout<<" Number of square meters you can paint : " ;
  int n ;
  cin>>n ;
  cout<<" Width of single wall (in meters) : " ;
  int w ;
  cin>>w ;
  cout<<" Height of single wall (in meters) : " ;
  int h ;
  cin>>h ;
  int total = n / (w * h) ;
  cout<<" Number of walls you can paint : "<<total;
}
