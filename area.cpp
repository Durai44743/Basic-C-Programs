#include <iostream>
#include <string>
using namespace std;

int main(){
    string sh;
    cout<<"Enter which Arae do you wnat to find(Circle/Square/Rectangle):";
    cin>>sh;
    if(sh == "Circle"){
        float r;
        cout<<"Enter Radius of Circle:";
        cin>>r;
        cout<<"Area of Circle = "<<3.14*r*r<<endl;
    }
    else if(sh == "Rectangle"){
        float b,h;
        cout<<"Enter Base and Height:";
        cin>>b>>h;
        cout<<"Area of Rectangle = "<<b*h<<endl;
    }
    else if(sh == "Square"){
        float a;
        cout<<"Enter side:";
        cin>>a;
        cout<<"Area of Square = "<<a*a<<endl;
    }
    else cout<<"Invalid Input"<<endl;
    return 0;
}