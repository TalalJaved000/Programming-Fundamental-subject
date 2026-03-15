#include<iostream>
using namespace std;
main(){
    int salarypermonth = 10000 ;
    int priceoflaptop = 50000 ;
    int advancemonths = 6 ;
    float advancesalary = 0.50 ;
    float totaladvance = salarypermonth * advancesalary * advancemonths ;
    if(totaladvance >= priceoflaptop){
        cout<<" Ali can buy the laptop ";
    }
    else{
       int monthlyadvance = salarypermonth * advancesalary ;
       int monthsrequired = priceoflaptop / monthlyadvance ;
       if(monthsrequired * monthlyadvance < priceoflaptop ){
        monthsrequired++;
       }
       cout<<"Months requires to  buy laptop : "<<monthsrequired;
    }
}