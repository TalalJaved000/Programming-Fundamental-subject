#include<iostream>
using namespace std;
main(){
    int numbers;
    cout<<" Enter number of elements : " ;
    cin>>numbers;
    int arr[100];
    int sum = 0;
    cout<< "Enter numbers : " ;
    for(int i=0; i<numbers; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<" Sum of numbers is : " << sum;
}