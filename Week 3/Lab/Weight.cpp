#include<iostream>
using namespace std;
main()
{
  cout<<"Enter the name of the person : " ;
  string n ;
  cin>>n ;
  cout<<" Enter the target weight loss of the person : " ;
  int w ;
  cin>>w ;
  int L = w * 15 ;
  cout<<n<<" needs "<<L<<" days to loss "<<w<<" kg" ;
}
