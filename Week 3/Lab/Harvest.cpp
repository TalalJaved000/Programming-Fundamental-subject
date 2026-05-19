#include<iostream>
using namespace std;
main()
{
  cout<<" Enter vegetable price per kilogram (in coins) : " ;
  float v_p ;
  cin>>v_p ;
  cout<<" Enter total kilograms of vegetables : " ;
  int v_k ;
  cin>>v_k ;
  cout<<" Enter fruits price per kilogram (in coins) : "<<endl;
  float f_p ;
  cin>>f_p ;
  cout<<" Enter total kilograms of fruits : " ;
  int f_k ;
  cin>>f_k ;
  float totalearningincoins = (v_p * v_k) + (f_p * f_k) ;
  float totalearninginrupees = totalearningincoins / 1.94 ;
  cout<<" Total earning in rupees : "<<totalearninginrupees;
}
  
  
