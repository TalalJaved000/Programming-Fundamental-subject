#include<iostream>
using namespace std;
main(){
    cout<<" Are you going to the university (press y for yes)";
    char going;
    cin>>going;
    if(going=='y'){
        cout<<"You are going to the university";
    }
    else{
        cout<<"You are not going to the university";
    }
}