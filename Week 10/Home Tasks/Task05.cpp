#include<iostream>
using namespace std;
float calculateSalary(float base,int score,int experience);
int main()
{
    float base;
    int score,experience;
    cout << "Enter base,score and experience in years:"<<endl;
    cin >> base;
    cin >> score;
    cin >> experience;

    float finalSalary = calculateSalary(base,score,experience);
    cout << "Final Salary:"<<finalSalary<<endl;
    return 0;
}
float calculateSalary(float base,int score,int experience){
    float bonus=0.0;
    if (score >= 90){
        bonus=0.2;
    }
   else if (score>=75){
    bonus=0.1;
   }
   else{
    bonus=0.05;
   }
   if (experience >= 5){
    bonus=bonus+0.05;
   }
   float totalBonus = base*bonus;
   return base+totalBonus;
}