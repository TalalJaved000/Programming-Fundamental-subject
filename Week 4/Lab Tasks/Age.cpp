#include<iostream>
using namespace std;
main(){
    cout<<" Enter the name of first brother : " ;
    string name1 ;
    cin>>name1 ;
    cout<<" Enter the age of first brother : " ;
    int age1 ;
    cin>>age1 ;
    cout<<" Enter the name os second brother : " ;
    string name2 ;
    cin>>name2 ;
    cout<<" Enter the age of second brother : " ;
    int age2 ;
    cin>>age2 ;
    cout<<" Enter the name of third brother : " ;
    string name3 ;
    cin>>name3 ;
    cout<<" Enter the age of third brother : " ;
    int age3 ;
    cin>>age3 ;
    if(age1 < age2 && age1 < age3){
        cout<<name1<<" is the youngest";
    }
     if(age2 < age3 && age2 < age1){
        cout<<name2<<" is the youngest";
    }
     if(age3 < age2 && age3 < age2){
        cout<<name3<<" is the youngest";
    }
}