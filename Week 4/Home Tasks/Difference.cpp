#include<iostream>
using namespace std;
main(){
    cout<<" Enter temperature of first city : " ;
    int temp1 ;
    cin>>temp1 ;
    cout<<" Enter temperature of second city : " ;
    int temp2 ;
    cin>>temp2 ;
    int diff = temp1 - temp2 ;
    if(diff > 10){
        cout<<" Difference is too big";
    }
    else{
        cout<<"Program ends";
    }
}