#include<iostream>
using namespace std;
main()
{
    cout<<" Enter the number : ";
    int num;
    cin>>num;
    int even = num % 2 ;
    if(num==0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
}
