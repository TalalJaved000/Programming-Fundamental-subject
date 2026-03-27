#include<iostream>
using namespace std;
main(){
   string username = "admin";
   int password = 1234;
   int pin[3];
   int choice;
   string name[3];
   int age[3];
   int studentcount = 0;
   string course[3];
   int coursecount = 0;
   bool login = false;
    for(int i=0; i<3; i++)
    {
         cout<<" Enter Username : " ;
         cin>>name[i];
         cout<<" Enter Password : " ;
         cin>>pin[i];
         if(name[i] == username && pin[i] == password)
         {
              login = true ;
              cout<<" Login Successful\n";
              break;
         }
         else
         {
              cout<<" Incorrect Username or Password\n ";
         }
    }
    if(login == true)
    {
        while(true)
        {
        cout<<"\n----University Management System----\n";
        cout<<"1. Add Student\n";
        cout<<"2. View Students\n";
        cout<<"3. Add Course\n";
        cout<<"4. View Courses\n";
        cout<<"5. Exit\n";
        cout<<" Enter Your Choice : " ;
        cin>>choice;

        if(choice == 1){
            if(studentcount >= 3)
            {
                cout<< "Student Limit Reached\n";
            }
            else{
                cout<< "Enter Student Name : " ;
                cin>>name[studentcount];
                cout<< "Enter Student Age : " ;
                cin>>age[studentcount] ;
                studentcount++;
                cout<< "Student Added Successfully\n";
            }
        }
        else if(choice ==2)
        {
            if(studentcount == 0){
                cout<< "No students added yet "<<endl;
            } else {
                for (int i=0; i<studentcount; i++){
                    cout<< "Student " << i+1 << " : " <<name[i] << " Age : " << age[i]<<endl;
                }
            }
            
        }
        else if(choice == 3){
            if(coursecount >= 3){
            cout<< "Course Limit Reached\n";
        }
        else
        {
            cout<< "Enter Course Name : " ;
            cin>>course[coursecount];
            coursecount++;
            cout<< "Course Added Successfully\n"<<endl;
        }
    }
        else if(choice == 4){
            if(coursecount == 0){
                cout<< "No courses available\n";
            }
            else{
                for(int i=0; i<coursecount; i++){
                    cout<< "Course " << i+1 <<  ": "<<course[i]<<endl;
               }            
           }
        }
        else if(choice == 5){
            cout<< "Exiting University Management System\n";
            break;
        }
         else{
            cout<< "Invalid Choice\n";
        }
    }
        return 0;
}
}