#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class Array{
    int arr[100][100];
    int r,c;
    public:
    Array(){}
    Array(int rr,int cc){
        r = rr;
        c = cc;
    }
    void init(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j] = rand()%100;
            }
        }
    }
    friend Array operator +(Array &a1,Array &a2){
        Array a3;
        for(int i=0;i<a1.r;i++){
            for(int j=0;j<a1.c;j++){
                a3.arr[i][j] = a1.arr[i][j] + a2.arr[i][j];
            }
        }
        a3.r = a1.r;
        a3.c = a1.c;
        return a3;
    }
    friend Array operator *(Array &a1,Array &a2){
        Array a3;
        for(int i=0;i<a1.r;i++){
            for(int j=0;j<a2.c;j++){
                a3.arr[i][j] = 0;
                for(int k=0;k<a1.c;k++){
                    a3.arr[i][j] = a3.arr[i][j] + (a1.arr[i][k] * a2.arr[k][j]); 
                }
            }
        }
        a3.r = a1.r;
        a3.c = a2.c;
        return a3;
    }
    friend ostream& operator <<(ostream& os,Array &a){
        for(int i=0;i<a.r;i++){
            for(int j=0;j<a.c;j++){
                os<<a.arr[i][j]<<"  ";
            }
            os<<endl;
        }
        return os;
    }
};
int main(){
    Array a1(3,3),a2(3,3),a3,a4;
    a1.init();
    cout<<"The First Array"<<endl;
    cout<<a1;
    a2.init();
    cout<<"The Second Array"<<endl;
    cout<<a2;
    a3 = a1 + a2;
    cout<<"The Sum Array"<<endl;
    cout<<a3;
    a4 = a1 * a2;
    cout<<"The multiplication array"<<endl;
    cout<<a4;
    return 0;
}