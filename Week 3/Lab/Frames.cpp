#include<iostream>
using namespace std;
main()
{
  cout<<"Enter minutes : " ;
  int minutes;
  cin>>minutes;
  cout<<"Enter fps : " ;
  int fps;
  cin>>fps;
  int Frames = minutes * 60 * fps ;
  cout<<" Total frames : "<<Frames;
}
