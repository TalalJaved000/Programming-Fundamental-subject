#include<iostream>
using namespace std;
main(){
    cout<<" Enter first word :" ;
    string word1 ;
    cin>>word1 ;
    cout<<"Enter second word : " ;
    string word2 ;
    cin>>word2 ;
    if(word1==word2){
        cout<<" Yes, the words are same";
    }
    else{
        cout<<" No, the words are different";
    }
}