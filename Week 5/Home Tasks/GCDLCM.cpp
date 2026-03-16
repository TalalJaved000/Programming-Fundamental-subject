#include<iostream>
using namespace std;
main(){
    int a, b, gcd, lcm, min;
    cout<<" Enter first number : " ;
    cin>>a;
    cout<<" Enter second number : " ; 
    cin>>b;
    min=(a<b) ? a : b;
    for(int i=1; i<=min; i++)
    {
        if(a%i==0 && b%i == 0)
        {
            gcd = i;
        }
    }
    lcm = (a * b) / gcd;
    cout<<" GCD : "<<gcd<<endl;
    cout<<" LCM : "<<lcm<<endl;
    return 0;
}