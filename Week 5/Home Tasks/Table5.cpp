#include<iostream>
using namespace std;
main(){
    int multiple;
    int table = 5 ;
    for(int num=1; num<=10; num++)
    {
        multiple=table*num;
        cout<<table<<" X "<<num<<" = "<<multiple<<endl;
    }
}