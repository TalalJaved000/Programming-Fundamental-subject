#include<iostream>
using namespace std;
main()
{
  cout<<"Enter the Name of student : " ;
  string Name;
  cin>>Name;
  cout<<"Enter matriculation marks(out of 1100) : " ;
  int matric_marks;
  cin>>matric_marks;
  cout<<"Enter intermediate marks(out of 1200) : " ;
  int inter_marks;
  cin>>inter_marks;
  cout<<"Enter ECAT marks(out of 400) : " ;
  int ECAT_marks;
  cin>>ECAT_marks;
  float Aggregate;
  Aggregate = (matric_marks * 10) / 1100 + (inter_marks * 40) / 1200 + (ECAT_marks * 50) / 400 ;
  cout<<"Aggregate score for "<<Name<<" is "<<Aggregate;
}
   
