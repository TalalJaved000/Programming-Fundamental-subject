#include<iostream>
using namespace std;
main(){
    int multiple;
    int table = 50 ;
    for(int num = 1; num <= 10; num = num+1){
        multiple = table * num ;
        cout<<table<<" * "<<num<<" = "<<multiple<<endl;
    }
}