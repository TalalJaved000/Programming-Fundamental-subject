#include<iostream>
using namespace std;
main()
{
  cout<<" Enter the name of the movie : " ;
  string n ;
  cin>>n ;
  cout<<" Enter the price of an adult ticket : $" ;
  int p_a ;
  cin>>p_a ;
  cout<<" Enter the price of a child ticktet : $" ;
  int p_c ;
  cin>>p_c ;
  cout<<" Enter the number of adult tickets sold : " ;
  int t_a ;
  cin>>t_a ;
  cout<<" Enter the number of child ticets sold : " ;
  int t_c ;
  cin>>t_c ;
  cout<<" Percentage of total money to donate to charity : " ;
  int percent ;
  cin>>percent ;
  int Total_money = (p_a * t_a) + (p_c * t_c) ;
  int money_to_charity = Total_money * percent / 100 ;
  int Remaining_amount = Total_money - money_to_charity ;

 cout<<" -----------------------------------------------"<<endl;
 cout<<" Movie : "<<n<< endl;
 cout<<" Total amount generated from ticket sales : $"<<Total_money<< endl;
 cout<<" Donated to charity ( "<<percent<<" ) : "<<money_to_charity<< endl;
 cout<<" Remaining amount after donation : $"<<Remaining_amount;
}