#include<iostream>
#include<cmath>
using namespace std;
string projectTimeCalculation(int hours,int days,int workers);
int main()
{
    int hours,days,workers;
    cout << "Enter needed hours:"<<endl;
    cin >> hours;
    cout << "Enter number of days of firm:"<<endl;
    cin >> days;
    cout << "Enter number of workers:"<<endl;
    cin >> workers;

    string result;
    result = projectTimeCalculation(hours,days,workers);
    cout <<result<<endl;
    return 0;
}
string projectTimeCalculation(int hours,int days,int workers){
float actualWorkingDays = days*0.9;
float totalHours = actualWorkingDays*10*workers;

int finalHours = floor(totalHours);
if (finalHours >= hours){
    int left = finalHours-hours;
    return "Yes!"+to_string(left)+ " hours left.";
}
else{
    int needed = hours-finalHours;
    return "Not enough time!"+to_string(needed)+ " hours needed.";
}
}