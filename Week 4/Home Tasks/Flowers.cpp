#include<iostream>
using namespace std;
main(){
    cout<<" Enter number of Red rose flowers : " ;
    int red ;
    cin>>red;
    cout<<" Enter number of white rose flowers : " ;
    int white ;
    cin>>white;
    cout<<" Enter number of tulips : " ;
    int tulips ;
    cin>>tulips ;
    float price = (2.00 * red) + (4.10 * white) + (2.50 * tulips) ;
    if(price > 200){
        int discprice = price - (price * 20/100);
        cout<<"Original price : "<<price<<endl;
        cout<<"Discounted price : "<<discprice;
    }
    else{
        cout<<"Original price : "<<price<<endl;
        cout<<"Discounted price : "<<price ;
    }
}