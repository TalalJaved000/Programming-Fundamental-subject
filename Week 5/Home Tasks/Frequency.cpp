#include<iostream>
using namespace std;
main(){
    int num;
    int dig;
    int count;
    for(int i=1; i>0; i=i+1){
        count=0;
        cout<<" Enter number : ";
        cin>>num;
        cout<<" Enter digit : ";
        cin>>dig;
        
        for(int temp=num; temp>0; temp=temp/10){
            if(temp % 10==dig){
                count = count + 1;
            }
        }
        cout<<" Frequency of "<<dig<<" in "<<num<<" is : "<<count<<endl;
    }
    return 0;
}
    
    