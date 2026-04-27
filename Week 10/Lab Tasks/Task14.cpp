#include<iostream>
using namespace std;

string timeTravel (int h,int min);

int main()
{
    int h,min;
    cout << "Enter Hours:";
    cin >> h;
    cout << "Enter Minutes:";
    cin >> min;

    string result;
    result = timeTravel (h,min);
    cout << result<<endl;
    return 0;
}
string timeTravel (int h,int min){
   min = min+15;
   if (min >= 60){
    min = min - 60;
    h = h + 1;
   }
   if (h >= 24){
    h = 0;
   }
   return to_string(h)+":"+to_string(min);
}