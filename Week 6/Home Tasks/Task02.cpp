#include<iostream>
using namespace std;
main(){
    int numbers ;
    cout<< "Enter number of elements : " ;
    cin>>numbers ;
    int arr[100];
    int count = 0 ;
    cout<< "Enter numbers : " ;
    for(int i=0; i<numbers; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    cout<< "Number of even elements : " << count;
}