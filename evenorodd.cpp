#include <iostream>
using namespace std;
int evenorodd(int n){
    if(n % 2 == 0) return 1;
    return 0;
}
int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    if(evenorodd(n)) cout<<n<<" is Even Number"<<endl;
    else cout<<n<<" is Odd Number"<<endl;
    return 0;
    
}