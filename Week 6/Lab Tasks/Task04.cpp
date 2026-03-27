#include<iostream>
using namespace std;
main(){
    int numbers[5];

    for(int i=0; i<5; i++){
        cout<<" Enter Number : " ;
        cin>>numbers[i];
    }
    cout<<" The 1st element in array is : "<<numbers[0]<<endl;
    cout<<" The last element in array is : "<<numbers[4]<<endl;
}