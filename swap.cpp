#include <iostream>
using namespace std;

int main(){
    int a=10,b=20,c;
    cout<<"Before Swap"<<endl<<"a="<<a<<" "<<"b="<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"After Swap"<<endl<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}
/*
Without using third Variable

a=10,b=20;
a = a + b;
b = a - b;
a = a - b;
 */