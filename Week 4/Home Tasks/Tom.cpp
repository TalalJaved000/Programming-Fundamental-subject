#include<iostream>
using namespace std;
main(){
    cout<<" Enter numbe rof holidays : " ;
    int holidays ;
    cin>>holidays ;
    int workingdays = 365 - holidays ;
    int timeforgames = (workingdays * 63) + (holidays * 127) ;
    int norm = 30000 - timeforgames ;
    if(norm > 0){
        int hours = norm / 60;
        int minutes = norm % 60 ;
        cout<<" Tom sleeps well" <<endl;
        cout<<hours<< " hours and "<<minutes<<" minuts less for play";
    }
    else{
        norm = -norm ;
        int hours = norm / 60 ;
        int minutes = norm % 60 ;
        cout<<" Tom will run away"<<endl;
        cout<<hours<< " hours and " <<minutes<<" minuts for play";
    }
}