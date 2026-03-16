#include<iostream>
using namespace std;
main(){
    int i,j,rows;
    cout<<" Enter number of rows : " ;
    cin>>rows;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;
}
    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=i; j++){
        cout<<"*";
    }cout<<endl;
}
return 0;
}