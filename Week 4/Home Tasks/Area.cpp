#include<iostream>
using namespace std;
main(){
    cout<<" Enter the shape : " ;
    string shape ;
    cin>>shape ;
    if(shape == "Square"){
        cout<<" Enter length of side : " ;
        double side ;
        cin>>side;
        double area = side * side ;
        cout<<area;
    }
    if(shape == "Rectangle"){
        cout<<" Enter length : " ;
        double length ;
        cin>>length ;
        cout<<" Enter width : " ;
        double width ;
        cin>>width ;
        double area = length * width ;
        cout<< area ;
    }
    if(shape == "Circle"){
        cout<<" Enter radius : " ;
        double radius ;
        cin>>radius ;
        double area = 3.1419 * radius * radius ;
        cout<< area ;
    }
    if(shape == "Triangle"){
        cout<<" Enter lenth of base : " ;
        double base ;
        cin>>base ;
        cout<<" Enter length of height : " ;
        double height ;
        cin>>height ;
        double area = 0.5 * base * height ;
        cout<< area ;
    }
} 