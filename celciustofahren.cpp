#include <iostream>
using namespace std;
float celcitofahren(){
    float c,f;
    cout<<"Enter Celcius:";
    cin>>c;
    f = (c * 9.0) / 5.0 + 32;
    return f;
}
float fahrentocelci(){
    float f,c;
    cout<<"Enter Fahrenheat:";
    cin>>f;
    c = (f - 32) * (5.0 / 9.0);
    return c;
}
int main(){
    float c,f;
    int ch;
    cout<<"Enter choice\n1)Celcius to Faherheat\n2)Fahernheat to Celcius:";
    cin>>ch;
    if(ch == 1) cout<<"Fahrenheat = "<<celcitofahren()<<endl;
    else if(ch == 2) cout<<"Celcius = "<<fahrentocelci()<<endl;
    else cout<<"Invalid Choice";
    return 0;

}