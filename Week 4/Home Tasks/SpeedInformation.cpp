#include<iostream>
using namespace std;
main(){
    cout<<" Enter the speed : " ;
    int speed ;
    cin>>speed ;
    if(speed <= 10){
        cout<<" Slow ";
    }
    if(speed > 10 && speed <=50){
        cout<<" average ";
    }
    if(speed > 50 && speed <=150 ){
        cout<<" Fast ";
    }
    if(speed > 150 && speed <= 1000){
        cout<<" Ultra fast ";
    }
    if(speed > 1000){
        cout<<" Extremely fast ";
    }
}