#include<iostream>
using namespace std;
main(){
    int n1=0, n2=1, next;
    int num;
    cout<<" Enter the length of Fibonacci series : " ;
    cin>>num;
    cout<< n1 <<",";
    cout<<n2 ;
    for(int x=1; x<num-1; x++)
    {
        next=n1 + n2 ;
        cout<<","<<next;
        n1 = n2;
        n2 = next;
    }
}