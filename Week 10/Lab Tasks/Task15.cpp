#include<iostream>
using namespace std;

string calculatePoolState (int V,int P1,int P2,float H);
int main()
{
    int V,P1,P2;
    float H;
    cout << "Enter volume of the pool in litres:";
    cin >> V;
    cout << "Enter flow rate of the first pipe per hour:";
    cin >> P1;
    cout << "Enter flow rate of the second pipe per hour:";
    cin >> P2;
    cout << "Enter hours that the worker is absent:";
    cin >> H;
    string result;
    result = calculatePoolState(V,P1,P2,H);
    cout <<result<<endl;
    return 0;
}
string calculatePoolState (int V,int P1,int P2,float H){
    float totalWater = (P1 + P2)*H;
    if (totalWater <= V){
        int poolPercent = (totalWater/V)*100;
        int pipe1Percent = (P1*H/totalWater)*100;
        int pipe2Percent = (P2*H/totalWater)*100;

        return "The pool is "+ to_string(poolPercent)+ " % full.Pipe 1:"+ to_string(pipe1Percent)+"%.Pipe 2:"
               + to_string(pipe2Percent)+"%";
    }
    else{
            float overFlow = totalWater - V;
            return "For "+ to_string(H)+ " hours the pool overflows with "+to_string(overFlow)+ "litres.";
        }
    }




