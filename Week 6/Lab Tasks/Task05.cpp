#include<iostream>
using namespace std;
main(){
    int n;
    cout<<" Enter number : " ;
    cin>>n;
    int numbers[n];
    for(int i=0; i<n; i++)
    {
        cout<<" Enter number "<<i + 1<<": ";
        cin>>numbers[i];
    }
    cout<<" The number you entered are : " ;
    for(int i=0; i<n; i++)
    {
        cout<<numbers[i]<<endl;
    }
    return 0;
}