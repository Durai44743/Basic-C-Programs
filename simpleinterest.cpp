#include <iostream>
using namespace std;

int main(){
    double pm,rate,t,si;
    cout<<"Enter Principle Amount:";
    cin>>pm;
    cout<<"Enter rate in %";
    cin>>rate;
    cout<<"Enter time period(in years)";
    cin>>t;
    si = (pm*rate*t)/100.0;
    cout<<"Simple Interst = "<<si;
    return 0;
}