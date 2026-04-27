#include<iostream>
using namespace std;
float calculateBalance(float balance,int years);
int main()
{
    int years;
    float balance;
    cout << "Enter Balance and years:"<<endl;
    cin >> balance;
    cin >> years;

    float updatedBalance = calculateBalance(balance,years);
    cout << "Updated Balance:"<<updatedBalance<<endl;
    return 0;
}
float calculateBalance(float balance,int years){
    float interest;
    if (balance<10000){
        interest = 0.05;
    }
    else if(balance <=50000){
        interest = 0.07;
    }
    else if(balance > 50000){
        interest = 0.1;
    }
    if (years >= 3){
        interest=interest+0.02;
    }
    float finalBalance = balance*interest;
    return finalBalance+balance;
}
