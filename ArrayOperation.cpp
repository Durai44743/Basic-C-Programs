#include <iostream>
#include <stdlib.h>
using namespace std;

class Array{
    int arr[100];
    int n;
    public:
    Array(int nn){
        n = nn;
    }
    void init(){
        for(int i=0;i<n;i++){
            arr[i] = rand()%100;
        }
    }
    friend Array operator +(Array &a1,Array &a2){
        Array a3(0);
        for(int i=0;i<a1.n;i++){
            a3.arr[i] = a1.arr[i];
        }
        int s = a1.n;
        for(int i=0;i<a2.n;i++){
            bool found = 0;
            for(int j=0;j<a1.n;j++){
                if(a2.arr[i] == a1.arr[j]){
                    found = 1;
                    break;
                }
            }
            if(!found){
                a3.arr[s] = a2.arr[i];
                    s++;
            }
        }
        a3.n = s;
        return a3;
    }
    friend Array operator |(Array &a1,Array &a2){
        Array a3(0);
        int s = 0;
        a2.arr[2]  = 41;
        for(int i=0;i<a2.n;i++){
            bool found = 0;
            for(int j=0;j<a1.n;j++){
                if(a2.arr[i] == a1.arr[j]){
                    found = 1;
                    break;
                }
            }
            if(found){
                a3.arr[s] = a2.arr[i];
                 s++;   
            }
        }
        a3.n = s;
        return a3;
    }
    friend Array operator -(Array &a1,Array &a2){
        Array a3(0);
        int s = 0;
        a2.arr[2]  = 41;
        for(int i=0;i<a1.n;i++){
            bool found = 0;
            for(int j=0;j<a2.n;j++){
                if(a1.arr[i] == a2.arr[j]){
                    found = 1;
                    break;
                }
            }
            if(!found){
                a3.arr[s] = a1.arr[i];
                 s++;   
            }
        }
        a3.n = s;
        return a3;

    }
    void show(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
    friend int operator &(Array &a,int d){
        for(int i=0;i<a.n;i++){
                if(a.arr[i] == d) return 1;
        }
        return 0;
    }
};
int main(){
    Array a1(5),a2(5),a3(0),a4(0),a5(0);
    a1.init();
    a2.init();
    a3 = a1 + a2;
    a4 = a1 | a2;
    a5 = a2 - a1;
    a1.show();
    a2.show();
    a3.show();
    a4.show();
    a5.show();
    return 0;
}