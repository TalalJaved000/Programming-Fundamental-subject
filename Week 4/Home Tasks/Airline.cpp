#include<iostream>
using namespace std;
main(){
    cout<<" Country : " ;
    string country ;
    cin>>country ;
    cout<<" Enter ticket price in dollars : " ;
    int ticket ;
    cin>>ticket ;
    if(country == "Ireland" ){
    int ticketprice = ticket - (ticket * 10/100);
    cout<<" Ticket price : "<<ticketprice;
    }
    else{
        int ticketprice = ticket - (ticket * 5/100);
        cout<<" Tciket price : "<<ticketprice;
    }
}