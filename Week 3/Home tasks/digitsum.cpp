#include<iostream>
using namespace std;
main()
{ 
  cout<<" Enter a 4-digit number : " ;
  int num ;
  cin>>num ;
  int digit ;
  int sum = 0 ;
  
  digit = num % 10 ;
  sum = sum + digit ;
  num = num / 10 ;
  
  digit = num % 10 ;
  sum = sum + digit ;
  num = num / 10 ;
 
  digit = num % 10 ;
  sum = sum + digit ;
  num = num / 10 ;
  
  digit = num % 10 ;
  sum = sum + digit ;
  
  cout<<" Sum of individual digits : "<<sum;
}
