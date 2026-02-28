#include<iostream>
using namespace std;
main()
{
  cout<<" Enter the weight of fertilizer bag in pounds : " ;
  int w ;
  cin>>w ;
  cout<<" Enter the price of fertilizer bag : $" ;
  int p ;
  cin>>p ;
  cout<<" Enter the area in square feet that bag can cover : " ;
  int a ;
  cin>>a ;
  float Price_per_pound = p / w ;
  float price_per_area = w * a ;
  cout<<" cost of fertilizing per pound : $"<<Price_per_pound<< endl;
  cout<<" cost of fertilizing per square feet : $"<<price_per_area;
}
