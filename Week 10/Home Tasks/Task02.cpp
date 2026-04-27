#include<iostream>
using namespace std;

string volumeOfPyramid (float l,float w,float h,string unit);
int main()
{
    float l,w,h;
    string unit;
    cout << "Enter length,width,height (in meters):";
    cin >> l;
    cin >> w;
    cin >> h;
    cout << "Enter output unit (millimeters,centimeters,meters,kilometers):";
    cin >> unit;
    string result;
    result = volumeOfPyramid (l,w,h,unit);
    cout << result <<endl;
    return 0;
}
string volumeOfPyramid (float l,float w,float h,string unit){
    float volumeInMeters = (l*w*h)/3.0;
    float finalVolume = 0;
    if (unit == "millimeters"){
        finalVolume = volumeInMeters*1000000000.0;
    }
    else if (unit == "centimeters"){
        finalVolume = volumeInMeters*1000000.0;
    }
    else if (unit == "meters"){
        finalVolume = volumeInMeters;
    }
    else if (unit == "kilometers"){
        finalVolume = volumeInMeters/1000000000.0;
    }
    return to_string(finalVolume)+ " cubic "+unit;
}
