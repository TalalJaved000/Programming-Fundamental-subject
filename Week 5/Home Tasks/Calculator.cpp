#include<iostream>
using namespace std;
main(){
    while(true){
        int choice, n1, n2, result;

        cout<<"\n----Simple calculator---- "<<endl;
        cout<<"1. Addition "<<endl;
        cout<<"2. Subtraction "<<endl;
        cout<<"3. Multiplication "<<endl;
        cout<<"4. Division "<<endl;
        cout<<"5. Clear Screen "<<endl;
        cout<<"6. Exit "<<endl;
        cout<<"Enter your choice (1-5) : ";
        cin>>choice;

        if(choice == 1){
            cout<<"Enter first number : " ;
            cin>>n1;
            cout<<"Enter second number : " ;
            cin>>n2;
            result = n1 + n2;
            cout<<"Result = "<<result<<endl;
        }
        else if(choice == 2){
             cout<<"Enter first number : " ;
            cin>>n1;
            cout<<"Enter second number : " ;
            cin>>n2;
            result = n1 - n2;
            cout<<"Result = "<<result<<endl;
        }
       else if(choice == 3){
             cout<<"Enter first number : " ;
            cin>>n1;
            cout<<"Enter second number : " ;
            cin>>n2;
            result = n1 * n2;
            cout<<"Result = "<<result<<endl;
        }
       else if(choice == 4){
             cout<<"Enter first number : " ;
            cin>>n1;
            cout<<"Enter second number : " ;
            cin>>n2;
            result = n1 / n2;
            cout<<"Result = "<<result<<endl;
        }
        else if(choice == 5){
             cout<<"Screen cleared "<<endl;
        }
        else if(choice == 6){
            cout<<"Exiting Calculator. Goodbye! "<<endl;
            break;
        }
    }
    return 0;
}