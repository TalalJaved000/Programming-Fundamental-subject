#include<iostream>
using namespace std;
main()
{
  cout<<" Enter the number of sides of polygon : " ;
  int n ;
  cin>>n ;
  int sum ;
  sum = (n - 2) * 180 ;
  cout<<" Total sum of interior angles of "<<n<<" sided polygon is "<<sum;
}
