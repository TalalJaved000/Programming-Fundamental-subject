#include<iostream>
using namespace std;
main()
{
   int dollarPrice = 278;
   int dollars;
   cout << " Enter amount in dollars : " ;
   cin >> dollars;
   int rupees;
   rupees = dollars * dollarPrice;
   cout << " Dollars "<<dollars<<" into Rupees are "<<rupees;
}
