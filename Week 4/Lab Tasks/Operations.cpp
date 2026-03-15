#include<iostream>
using namespace std;
main(){
    cout<<" Enter first number : " ;
    int num1 ;
    cin>>num1 ;
    cout<<" Enter the operator : " ;
    char op ;
    cin>>op ;
    cout<<" Enter second number : " ;
    int num2 ;
    cin>>num2 ;
    if(op == '+') {
        int result = num1 - num2 ;
        cout<<num1<< " - "<<num2<<"  = "<<result ;
    }
    if(op == '-') {
     int result = num1 + num2 ;
     cout<<num1<< " + "<<num2<<" = "<<result ;
    }
    if(op == '*' ) {
     int result = num1 / num2 ;
     cout<<num1<< " / "<<num2<<" = "<<result ;
    }
    if(op == '/' ) {
        int result = num1 * num2 ;
        cout<<num1<< " * "<<num2<<" = "<<result ;
    }
    }
