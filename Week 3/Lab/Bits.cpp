#include<iostream>
using namespace std;
main()
{
  cout<<"Enter wthe size in megabytes (MB) : ";
  int MB;
  cin>>MB;
  float Bits;
  Bits = MB * 8.0 * 1024.0 * 1024.0   ;
  cout<<MB<< "MB is equivalent to "<<Bits<<" Bits" ;
}

