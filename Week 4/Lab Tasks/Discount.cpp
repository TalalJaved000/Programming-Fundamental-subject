#include<iostream>
using namespace std;
main(){
    cout<<" Enter your Bill : " ;
    int bill;
    cin>>bill;
    if(bill<=5000){
        int disc1 = bill - (bill*5/100);
        cout<<"Your discounted bill is "<<disc1;
    }
    if(bill>5000){
        int disc1 = bill - (bill*10/100);
        cout<<"Your discounted bill is "<<disc1;
    }
} 