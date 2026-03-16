#include<iostream>
using namespace std;
main(){
    int num, digit, sum=0 ;
    cout<<" Enter the number : " ;
    cin>>num;
    while(num !=0)
    {
        digit = num % 10 ;
        sum = sum + digit ;
        num = num / 10 ;
    }
    cout<<" Sum of digits : "<<sum ;
}